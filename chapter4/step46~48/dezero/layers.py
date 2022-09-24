import weakref

import numpy as np

import dezero.functions as F
from dezero.core import Parameter

##### step44 ###################################################


class Layer:
    def __init__(self):
        self._params = set()

    def __setattr__(self, name, value):  # インスタンス変数に値を代入する度に呼び出される特殊メソッド
        # ParameterクラスまたはLayerクラスのインスタンスの場合
        if isinstance(value, (Parameter, Layer)):
            # _paramsにインスタンス変数名を追加
            self._params.add(name)
        # インスタンス変数に値を代入（おそらくobjectクラスを呼出している）
        super().__setattr__(name, value)

    def __call__(self, *inputs):
        outputs = self.forward(*inputs)
        # outputsがtuple型でない場合
        if not isinstance(outputs, tuple):
            # tuple型に変換
            outputs = (outputs,)

        # 将来性を考えて入力と出力は弱参照で保持
        self.inputts = [weakref.ref(x) for x in inputs]
        self.ouputs = [weakref.ref(y) for y in outputs]

        # 出力が1つの場合は値を直接返却、2つ以上の場合はtupleで返却（Functionと統一）
        return outputs if len(outputs) > 1 else outputs[0]

    def forward(self, inputs):
        # forwardは継承先で実装する
        raise NotImplementedError()

    def params(self):
        for name in self._params:
            obj = self.__dict__[name]
            # このクラスが入れ子で保持するLayerの場合
            if isinstance(obj, Layer):
                # LayerのParameterを取得する
                yield from obj.params()  # yeildを使った関数をジェネレータという。ジェネレータを使って別の新しいジェネレータを作るときはyeild fromを使う。
            # このクラスが直接保持するParameterの場合
            else:
                yield obj

    def cleargrads(self):
        # parameterのgradをすべて初期化
        for param in self.params():
            param.cleargrad()


class Linear(Layer):
    def __init__(
        self,
        out_size,
        nobias=False,
        dtype=np.float32,
        in_size=None,
    ):
        # Layerクラスのinit呼出し
        super().__init__()

        # Linearクラス独自のinit
        self.in_size = in_size
        self.out_size = out_size
        self.in_size = in_size
        self.dtype = dtype

        self.W = Parameter(None, name="W")  # 空のParameterインスタンスをセット

        # in_sizeが指定されていない場合は後回し（forward内で初期化）
        if self.in_size is not None:
            self._init_W()

        # 　バイアスを競ってしない場合
        if nobias:
            self.b = None
        else:
            self.b = Parameter(np.zeros(out_size, dtype=dtype), name="b")

    def _init_W(self):
        I, O = self.in_size, self.out_size
        W_data = np.random.randn(I, O).astype(self.dtype) * np.sqrt(1 / I)
        self.W.data = W_data

    def forward(self, x):
        # 重みが初期化されていない場合データを流すタイミングで初期化
        if self.W.data is None:
            # データから自動で設定することでユーザビリティ向上
            self.in_size = x.shape[1]
            self._init_W()

        y = F.linear(x, self.W, self.b)
        return y
