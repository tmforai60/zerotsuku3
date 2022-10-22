import weakref
import numpy as np
from dezero.core import Parameter
import dezero.functions as F

###############################################################
# Layerの管理を行うClass
# Layerのパラメータを保持する。
# - パラメータ名は_paramsというインスタンス変数で管理する
# - 実際のパラメータは特殊メソッドである__setattr__で管理する
# - 取り出すときは __dict__で取り出す
###############################################################
class Layer:
    def __init__(self):
        # _paramsにはLayerインスタンスがもつパラメータを保持する
        # set()を使って空の入れ物を作った
        # set()を使うことで重複を避けることができる 
        self._params = set()

    def __setattr__(self, name, value):
        # 引数がParameter型かLayer型であることをチェック
        if isinstance(value, (Parameter, Layer)):
            # インスタンス変数が加えられた
            self._params.add(name)
        # __setattr__をオーバーライドしているので、ここで親クラスと同様の機能を再提供してやっている
        super().__setattr__(name, value)

    def __call__(self, *inputs):
        outputs = self.forward(*inputs)
        if not isinstance(outputs, tuple):
            outputs = (outputs,)
        self.inputs = [weakref.ref(x) for x in inputs]
        self.outputs = [weakref.ref(y) for y in outputs]
        return outputs if len(outputs) > 1 else outputs[0]
    
    def forward(self, inputs):
        raise NotImplementedError()

    def params(self):
        for name in self._params:
            obj = self.__dict__[name]

            # STEP45: Layerからパラメータを取り出す
            if isinstance(obj, Layer):
                #print({"name": name, "value": obj.params()})
                yield from obj.params()
            else:
                yield obj
                #yield {"name": name, "value": obj}

    def cleargrads(self):
        for param in self.params():
            param.cleargrad()


# =============================================================================
# Linear / Conv2d / Deconv2d
# =============================================================================

# STEP44
#
# 線形結合層を計算する。
#
class Linear(Layer):
    #　ユーザはlayer = Linear(100) などのように出力のみ指定すれば良い
    def __init__(self, 
                 out_size,            # 出力サイズ
                 nobias =False,       # バイアスを使用するかどうか？
                 dtype  =np.float32,  # 精度の指定
                 in_size=None):       # 入力サイズ
        # 継承した親クラスの __init__の呼び出し
        # self._params = set() が有効になる
        super().__init__()
        self.in_size  = in_size
        self.out_size = out_size
        self.dtype    = dtype

        self.W = Parameter(None, name='W')
        # in_sizeが指定されていない場合は後回し
        # forwardの中でWのサイズを決めることで自動的にサイズを指定することができる
        # デフォルトはNone
        if self.in_size is not None:
            self._init_W()
        
        # バイアス使用しないが有効のとき
        if nobias:
            self.b = None
        else:
            # outサイズの0埋め1次元配列を作成する。
            # Parameter Class => Variable Class なのでnameを決めることができる
            self.b = Parameter(np.zeros(out_size, dtype=dtype), name='b')

    def _init_W(self):
        I, O = self.in_size, self.out_size
        # 乱数(正規分布)で初期化
        W_data = np.random.randn(I, O).astype(self.dtype) * np.sqrt(1 / I)
        self.W.data = W_data

    def forward(self, x):
        # データを渡すタイミングで重みを初期化.Wが指定されて居ない場合、自動的にサイズを決めてやる。
        if self.W.data is None:
            self.in_size = x.shape[1]
            self._init_W()

        y = F.linear(x, self.W, self.b)
        return y