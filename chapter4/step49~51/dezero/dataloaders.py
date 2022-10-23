import math
pil_available = True
try:
    from PIL import Image
except:
    pil_available = False
import numpy as np
#from dezero import cuda


class DataLoader:
    def __init__(self, dataset, batch_size, shuffle=True, gpu=False):
        """
        引数をインスタンス変数に格納する。
        その後resetメソッドを呼び出し、イタレーションの回数を0に設定する。必要に応じてShuffleする。
        """
        self.dataset = dataset
        self.batch_size = batch_size
        self.shuffle = shuffle
        self.data_size = len(dataset)
        self.max_iter = math.ceil(self.data_size / batch_size)
        self.gpu = gpu

        self.reset()

    def reset(self):
        """
        インスタンス変数のiterationの回数を0に設定
        必要に応じてShuffleする。Shuffleは、np.random.permutationによって実現されており
        i = len(self.dataset)とすると、0 から i-1までの数値の列を作成しそれを、ランダムに並び替えている
        """
        self.iteration = 0
        if self.shuffle:
            self.index = np.random.permutation(len(self.dataset))
        else:
            self.index = np.arange(len(self.dataset))

    def __iter__(self):
        return self

    def __next__(self):
        """
        ミニバッチを取り出し、それをndarrayインスタンスへと変換する。その範囲は、以下のようになる。
        - Start: i * batch_size:(i + 1)
        -   End: (i + 1) * batch_size
        self.indexは,shuffle=True のときランダムに並んでいることに注意する
        self.iterationがself.max_iter (ステップ数、1エポックあたりのバッチの回数)を超えると、
        raise StopIteration で、この関数を抜ける

        Args:
        Returns:
            x (numpy.ndarray): data in batch
            t (numpy.ndarray): label in batch
        """
        if self.iteration >= self.max_iter:
            self.reset()
            raise StopIteration

        i, batch_size = self.iteration, self.batch_size
        batch_index = self.index[i * batch_size:(i + 1) * batch_size]
        batch = [self.dataset[i] for i in batch_index]

        #xp = cuda.cupy if self.gpu else np
        #x = xp.array([example[0] for example in batch])
        #t = xp.array([example[1] for example in batch])
        
        x = np.array([example[0] for example in batch])
        t = np.array([example[1] for example in batch])
        self.iteration += 1
        return x, t

    def next(self):
        return self.__next__()

    def to_cpu(self):
        self.gpu = False

    def to_gpu(self):
        self.gpu = True


class SeqDataLoader(DataLoader):
    def __init__(self, dataset, batch_size, gpu=False):
        super().__init__(dataset=dataset, batch_size=batch_size, shuffle=False,
                         gpu=gpu)

    def __next__(self):
        if self.iteration >= self.max_iter:
            self.reset()
            raise StopIteration

        jump = self.data_size // self.batch_size
        batch_index = [(i * jump + self.iteration) % self.data_size for i in
                       range(self.batch_size)]
        batch = [self.dataset[i] for i in batch_index]

        xp = cuda.cupy if self.gpu else np
        x = xp.array([example[0] for example in batch])
        t = xp.array([example[1] for example in batch])

        self.iteration += 1
        return x, t