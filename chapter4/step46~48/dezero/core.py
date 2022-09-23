import contextlib
import weakref

import numpy as np
from this import d

import dezero


class Config:
    # 逆伝播を可能にするか（=逆伝播のための中間計算を保持するか？）
    enable_backprop = True  # デフォルトは逆伝播：有効


@contextlib.contextmanager
def using_config(name, value):
    old_value = getattr(
        Config, name
    )  # Configからname(='enable_backprop')に一致する属性を取得して値を取得
    setattr(
        Config, name, value
    )  # Configのname(='enable_backprop')に一致する属性を取得して値をセット
    try:
        yield  # using_configのネストの中を実行
    finally:
        setattr(
            Config, name, old_value
        )  # Configのname(='enable_backprop')に一致する属性を取得して値をセット


class Variable:
    # 演算子の優先度を(ndarrayより）高めに設定
    __array_priority__ = 200

    def __init__(self, data, name=None):
        if data is not None:
            if not isinstance(data, np.ndarray):
                raise TypeError("{} is not supported".format(type(data)))
        self.data = data  # data
        self.name = name  # name
        self.grad = None  # gradient
        self.creator = None  # 自身を出力した関数
        self.generation = 0  # 順伝播の世代

    def set_creator(self, func):
        self.creator = func  # 自身を出力した関数を記憶
        self.generation = func.generation + 1  # 親の世代+1を自身の世代にセット

    # ループ実行
    def backward(self, retain_grad=False, create_graph=False):
        # gradが無指定の場合
        if self.grad is None:
            # dataと同形状で要素がすべて1の配列を生成
            self.grad = Variable(
                np.ones_like(self.data)
            )  # numpy.ones_likeはデータ型も同様で定義してくれる

        funcs = []
        seen_set = set()

        def add_func(f):
            if f not in seen_set:
                funcs.append(f)
                seen_set.add(f)
                funcs.sort(key=lambda x: x.generation)  # xはリストの要素

        add_func(self.creator)

        while funcs:
            # print(funcs)  # 毎ステップpopとappendするのでリストサイズは常に1
            f = funcs.pop()
            gys = [
                output().grad for output in f.outputs
            ]  # outputがweakrefインスタンスなのでoutput()で要素にアクセスする

            with using_config("enable_backprop", create_graph):
                gxs = f.backward(*gys)  # メインのbackward
                # gxsがタプル形式出ない場合タプルに変換
                if not isinstance(gxs, tuple):
                    gxs = (gxs,)

                # x.gradにgxを格納
                for x, gx in zip(f.inputs, gxs):
                    # gradが未計算の場合
                    if x.grad is None:
                        # gradを格納
                        x.grad = gx
                    # 他のノードからgradが与えられている場合
                    else:
                        # gradを加算
                        x.grad = x.grad + gx

                    # xを出力する関数が存在する場合（前層が存在する場合）
                    if x.creator is not None:
                        add_func(x.creator)

                # gradを保持しない場合
                if not retain_grad:
                    for y in f.outputs:
                        # 自身のcreatorのoutputのgradを消去
                        y().grad = None  # weakrefメソッドの要素にアクセスするのでy()

    def cleargrad(self):
        self.grad = None

    @property  # インスタンス変数としてアクセスさせたいものに付与
    def shape(self):
        return self.data.shape

    @property
    def ndim(self):
        return self.data.ndim

    @property
    def size(self):
        return self.data.size

    @property
    def dtype(self):
        return self.data.dtype

    def __len__(self):  # 組込み関数lenを呼び出したときに実行される特殊メソッド
        return len(self.data)

    def __repr__(self):  # 組込み関数printを呼び出したときに実行される特殊メソッド
        if self.data is None:
            return "variable(None)"
        else:
            p = str(self.data).replace("\n", "\n" + " " * 9)
            return "variable(" + p + ")"

    # setup_variableで設定するように変更したためコメントアウト

    # def __mul__(self, other):  # *演算子を使用したときに呼び出される特殊メソッド. selfが左項、otherが右項
    #     return mul(self, other)

    # def __rmul__(self, other):  # *演算子を使用したときに呼び出される特殊メソッド. selfが右項、otherが左項
    #     return mul(other, self)

    # def __add__(self, other):  # +演算子を使用したときに呼び出される特殊メソッド. selfが左項、otherが右項
    #     return add(self, other)

    # def __radd__(self, other):  # +演算子を使用したときに呼び出される特殊メソッド. selfが右項、otherが左項
    #     return add(other, self)

    # def __sub__(self, other):  # -演算子を使用したときに呼び出される特殊メソッド. selfが左項、otherが右項
    #     return sub(self, other)

    # def __rsub__(self, other):  # -演算子を使用したときに呼び出される特殊メソッド. selfが右項、otherが左項
    #     return sub(other, self)

    # def __truediv__(self, other):  # /演算子を使用したときに呼び出される特殊メソッド. selfが左項、otherが右項
    #     return div(self, other)

    # def __rtruediv__(self, other):  # /演算子を使用したときに呼び出される特殊メソッド. selfが右項、otherが左項
    #     return div(other, self)

    # def __neg__(self):  # 単項演算子-を使用したときに呼び出される特殊メソッド
    #     return neg(self)

    # def __pow__(self, other):  # **演算子を使用したときに呼び出される特殊メソッド. selfが左項、otherが右項
    #     return pow(self, other)

    def reshape(self, *shape):
        # shapeがtupleまたはlise型で入力された場合
        if len(shape) == 1 and isinstance(
            shape[0], (tuple, list)
        ):  # shapeに渡された引数が1つかつそれがtupleまたはlistの場合に形状全体がtupleまたはlistで渡されたと判断
            shape = shape[0]  # 要素を取り出し（可変長引数の場合全体がtupleで包まれる）
        return dezero.functions.reshape(self, shape)

    @property
    def T(self):
        return dezero.functions.transpose(self)

    def sum(self, axis=None, keepdims=False):
        return dezero.functions.sum(self, axis, keepdims)


class Function:
    def __call__(self, *inputs):
        # inputをVariable型に変換して受取る
        inputs = [as_variable(x) for x in inputs]
        # 引数を可変長、タプル形式で受取る
        xs = [x.data for x in inputs]
        ys = self.forward(*xs)  # リストをアンパッキングしてforwardに渡す
        # ysがタプル形式でない場合タプル形式に変換
        if not isinstance(ys, tuple):
            ys = (ys,)
        outputs = [
            Variable(as_array(y)) for y in ys
        ]  # 出力結果を別のVariableインスタンスに格納. yが0次元の場合計算結果がndarrayではない型になること防ぐ

        # 逆伝播：有効モードの場合
        if Config.enable_backprop:
            self.generation = max(
                [x.generation for x in inputs]
            )  # input dataの世代の中で最大値を関数の世代とする
            for output in outputs:
                output.set_creator(
                    self
                )  # 出力結果のVariableインスタンスに自身の生みの親の関数を覚えさせる
            self.inputs = inputs
            self.outputs = [
                weakref.ref(output) for output in outputs
            ]  # outputのVariableとFunction間で循環参照にならないように弱参照を使用

        # outputsの要素が1つの場合中身を返し、2つ以上の場合リストを返す
        return outputs if len(outputs) > 1 else outputs[0]

    def forward(self, xs):
        raise NotImplementedError()

    def backward(self, gys):
        raise NotImplementedError()


def as_array(x):
    if np.isscalar(x):
        return np.array(x)
    else:
        return x


class Add(Function):
    """
    要素が2つのリストを受け取り加算結果を返す
    """

    def forward(self, x0, x1):
        # ブロードキャスト対応のため入力時の形状を保存
        self.x0_shape, self.x1_shape = x0.shape, x1.shape
        y = x0 + x1
        return y

    def backward(self, gy):
        gx0, gx1 = gy, gy
        # 入力の形状が異なる場合（=ブロードキャストが発生する場合）
        if self.x0_shape != self.x1_shape:
            gx0 = dezero.functions.sum_to(gx0, self.x0_shape)
            gx1 = dezero.functions.sum_to(gx1, self.x1_shape)
        return gx0, gx1


def add(x0, x1):
    x1 = as_array(x1)
    return Add()(x0, x1)


class Mul(Function):
    def forward(self, x0, x1):
        y = x0 * x1
        return y

    def backward(self, gy):
        x0, x1 = self.inputs
        gx0 = gy * x1
        gx1 = gy * x0
        # 入力の形状が異なる場合（=ブロードキャストが発生する場合）
        if x0.shape != x1.shape:
            gx0 = dezero.functions.sum_to(gx0, x0.shape)
            gx1 = dezero.functions.sum_to(gx1, x1.shape)
        return gx0, gx1


def mul(x0, x1):
    x1 = as_array(x1)
    return Mul()(x0, x1)


class Neg(Function):
    def forward(self, x):
        return -x

    def backward(self, gy):
        return -gy


def neg(x):
    return Neg()(x)


class Sub(Function):
    def forward(self, x0, x1):
        self.x0_shape, self.x1_shape = x0.shape, x1.shape
        y = x0 - x1
        return y

    def backward(self, gy):
        gx0, gx1 = gy, -gy
        # 入力の形状が異なる場合（=ブロードキャストが発生する場合）
        if self.x0_shape != self.x1_shape:
            gx0 = dezero.functions.sum_to(gx0, self.x0_shape)
            gx1 = dezero.functions.sum_to(gx1, self.x1_shape)
        return gx0, gx1


def sub(x0, x1):
    x1 = as_array(x1)
    return Sub()(x0, x1)


def rsub(x0, x1):
    x1 = as_array(x1)
    return Sub()(x1, x0)


class Div(Function):
    def forward(self, x0, x1):
        y = x0 / x1
        return y

    def backward(self, gy):
        x0, x1 = self.inputs
        gx0 = gy / x1
        gx1 = gy * (-x0 / x1**2)
        # 入力の形状が異なる場合（=ブロードキャストが発生する場合）
        if x0.shape != x1.shape:
            gx0 = dezero.functions.sum_to(gx0, x0.shape)
            gx1 = dezero.functions.sum_to(gx1, x1.shape)
        return gx0, gx1


def div(x0, x1):
    x1 = as_array(x1)
    return Div()(x0, x1)


def rdiv(x0, x1):
    x1 = as_array(x1)
    return Div()(x1, x0)


class Pow(Function):
    def __init__(self, c):
        self.c = c

    def forward(self, x):
        y = x**self.c
        return y

    def backward(self, gy):
        (x,) = self.inputs
        c = self.c
        gx = c * x ** (c - 1) * gy
        return gx


def pow(x, c):
    return Pow(c)(x)


def as_variable(obj):
    if isinstance(obj, Variable):
        return obj
    else:
        return Variable(obj)


def setup_variable():
    Variable.__add__ = add
    Variable.__radd__ = add
    Variable.__mul__ = mul
    Variable.__rmul__ = mul
    Variable.__neg__ = neg
    Variable.__sub__ = sub
    Variable.__rsub__ = rsub
    Variable.__truediv__ = div
    Variable.__rtruediv__ = rdiv
    Variable.__pow__ = pow
    Variable.matmul = dezero.functions.matmul
    Variable.__getitem__ = dezero.functions.get_item


def no_grad():
    return using_config("enable_backprop", False)


class Square(Function):
    def forward(self, x):
        y = x**2
        return y

    def backward(self, gy):
        x = self.inputs[0].data
        gx = 2 * x * gy
        return gx


class Exp(Function):
    def forward(self, x):
        y = np.exp(x)
        return y

    def backward(self, gy):
        x = self.input.data
        gx = np.exp(x) * gy
        return gx


def square(x):
    return Square()(x)


def exp(x):
    return Exp()(x)


##### step44 ###################################################


class Parameter(Variable):
    pass
