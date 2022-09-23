import numpy as np

from dezero import utils
from dezero.core import Function, as_variable

# =============================
# 代表的な関数
# =============================

##### sin関数 #####
class Sin(Function):
    def forward(self, x):
        y = np.sin(x)
        return y

    def backward(self, gy):
        (x,) = self.inputs
        gx = gy * cos(x)
        return gx


def sin(x):
    return Sin()(x)


##### cos関数 #####
class Cos(Function):
    def forward(self, x):
        y = np.cos(x)
        return y

    def backward(self, gy):
        (x,) = self.inputs
        gx = gy * -sin(x)
        return gx


def cos(x):
    return Cos()(x)


##### tanh関数 #####
class Tanh(Function):
    def forward(self, x):
        y = (np.exp(x) - np.exp(-x)) / (np.exp(x) + np.exp(-x))
        return y

    def backward(self, gy):
        y = self.outputs[0]()
        gx = gy * (1 - y**2)
        return gx


def tanh(x):
    return Tanh()(x)


##### exp関数 #####
class Exp(Function):
    def forward(self, x):
        # xp = cuda.get_array_module(x)
        # y = xp.exp(x)
        y = np.exp(x)
        return y

    def backward(self, gy):
        y = self.outputs[0]()  # weakref
        gx = gy * y
        return gx


def exp(x):
    return Exp()(x)


##### log関数 #####


class Log(Function):
    def forward(self, x):
        y = np.log(x)
        return y

    def backward(self, gy):
        (x,) = self.inputs
        gx = gy / x
        return gx


def log(x):
    return Log()(x)


# =============================
# データ操作用関数
# =============================
class Reshape(Function):
    def __init__(self, shape):
        self.shape = shape

    def forward(self, x):
        # オリジナルのshapeを保存
        self.x_shape = x.shape

        y = x.reshape(self.shape)
        return y

    def backward(self, gy):
        return reshape(gy, self.x_shape)


def reshape(x, shape):
    """入力された配列データの形状変換を行う

    Args:
        x (Variable or ndarray): reshape対象のデータ
        shape (int or list or tuple): reshape後の形状

    Returns:
        Variable: reshape後のデータ
    """
    # xの形状が既に変形後の形状と一致する場合
    if x.shape == shape:
        # Variable型で返却
        return as_variable(x)
    # xの形状と変形後の形状と一致しない場合
    return Reshape(shape)(x)


class Transpose(Function):
    def forward(self, x):
        y = np.transpose(x)
        return y

    def backward(self, gy):
        gx = transpose(gy)
        return gx


def transpose(x):
    return Transpose()(x)


class Sum(Function):
    def __init__(self, axis, keepdims):
        self.axis = axis
        self.keepdims = keepdims

    def forward(self, x):
        self.x_shape = x.shape
        y = x.sum(axis=self.axis, keepdims=self.keepdims)
        return y

    def backward(self, gy):
        gx = broadcast_to(gy, self.x_shape)
        return gx


def sum(x, axis=None, keepdims=False):
    return Sum(axis, keepdims)(
        x
    )  # Functionクラスを継承している制約でforwardの引数はinputデータのみにしていると思われる


class BroadcastTo(Function):
    def __init__(self, shape):
        self.shape = shape

    def forward(self, x):
        self.x_shape = x.shape
        y = np.broadcast_to(x, self.shape)
        return y

    def backward(self, gy):
        gx = sum_to(gy, self.x_shape)
        return gx


def broadcast_to(x, shape):
    if x.shape == shape:
        return as_variable(x)
    return BroadcastTo(shape)(x)


class SumTo(Function):
    def __init__(self, shape):
        self.shape = shape

    def forward(self, x):
        self.x_shape = x.shape
        y = utils.sum_to(x, self.shape)
        return y

    def backward(self, gy):
        gx = broadcast_to(gy, self.x_shape)
        return gx


def sum_to(x, shape):
    if x.shape == shape:
        return as_variable(x)
    return SumTo(shape)(x)


class MatMul(Function):
    def forward(self, x, W):
        y = x.dot(W)
        return y

    def backward(self, gy):
        x, W = self.inputs
        gx = matmul(gy, W.T)
        gW = matmul(x.T, gy)
        return gx, gW


def matmul(x, W):
    return MatMul()(x, W)


# =============================
# 誤差関数
# =============================
class MeanSquaredError(Function):
    def forward(self, x0, x1):
        diff = x0 - x1
        y = (diff**2).sum() / len(diff)
        return y

    def backward(self, gy):
        x0, x1 = self.inputs
        diff = x0 - x1
        gy = broadcast_to(gy, diff.shape)
        gx0 = gy * diff * (2.0 / len(diff))
        gx1 = -gx0
        return gx0, gx1

    """
    ■コメント
    ・forwardではndarrayインスタンスに対する実装を行っている。
    ・backwardでは微分を求める際に必要な計算を再度行った上で微分値を計算している。
    ・両者に使用するインスタンスをわざと分けることでforward/backwardの各スコープを抜けると
      すぐにメモリから消去されるようなり、メモリ節約となる。
    
    ※DeZeroの関数を使って実装することもできるが、その場合は中間データのメモリが残ったままになるため
      今後実装する関数もFunctionクラスを継承して実装する。
    """


def mean_squared_error(x0, x1):
    return MeanSquaredError()(x0, x1)


# =============================
# 活性化関数
# =============================


##### step43 ###################################################


# =============================
# 代表的な関数
# =============================

##### linear_simple関数 #####
def linear_simple(x, W, b=None):
    x, W = as_variable(x), as_variable(W)
    t = matmul(x, W)
    if b is None:
        return t
    y = t + b
    t.data = None  # メモリ節約のため中間データ消去
    return y


##### linear関数 #####
class Linear(Function):
    def forward(self, x, W, b):
        y = x.dot(W)
        if b is not None:
            y += b
        return y

    def backward(self, gy):
        x, W, b = self.inputs
        gb = None if b.data is None else sum_to(gy, b.shape)
        gx = matmul(gy, W.T)
        gW = matmul(x.T, gy)
        return gx, gW, gb


def linear(x, W, b=None):
    return Linear()(x, W, b)


# =============================
# 活性化関数
# =============================


def sigmoid_simple(x):
    x = as_variable(x)
    y = 1 / (1 + exp(-x))
    return y


class Sigmoid(Function):
    def forward(self, x):
        # xp = cuda.get_array_module(x)
        y = 1 / (1 + np.exp(-x))
        y = np.tanh(x * 0.5) * 0.5 + 0.5  # Better implementation
        return y

    def backward(self, gy):
        y = self.outputs[0]()
        gx = gy * y * (1 - y)
        return gx


def sigmoid(x):
    return Sigmoid()(x)


################################################################


##### step47 ###################################################

# =============================
# データ操作用関数
# =============================


class GetItem(Function):
    def __init__(self, slices):
        self.slices = slices

    def forward(self, x):
        y = x[self.slices]
        return y

    def backward(self, gy):
        (x,) = self.inputs
        f = GetItemGrad(self.slices, x.shape)
        return f(gy)


class GetItemGrad(Function):
    def __init__(self, slices, in_shape):
        self.slices = slices
        self.in_shape = in_shape

    def forward(self, gy):
        gx = np.zeros(self.in_shape, dtype=gy.dtype)
        np.add.at(gx, self.slices, gy)
        return gx

    def backward(self, ggx):
        return get_item(ggx, self.slices)


def get_item(x, slices):
    f = GetItem(slices)
    return f(x)


class Clip(Function):
    def __init__(self, x_min, x_max):
        self.x_min = x_min
        self.x_max = x_max

    def forward(self, x):
        y = np.clip(x, self.x_min, self.x_max)
        return y

    def backward(self, gy):
        (x,) = self.inputs
        mask = (x.data >= self.x_min) * (x.data <= self.x_max)
        gx = gy * mask
        return gx


def clip(x, x_min, x_max):
    return Clip(x_min, x_max)(x)


# =============================
# 活性化関数
# =============================


def softmax_simple(x, axis=1):
    x = as_variable(x)
    y = exp(x)
    sum_y = sum(y, axis=axis, keepdims=True)
    return y / sum_y


# =============================
# 誤差関数
# =============================


def softmax_cross_entropy_simple(x, t):
    x, t = as_variable(x), as_variable(t)
    N = x.shape[0]
    p = softmax_simple(x)
    p = clip(p, 1e-15, 1.0)
    log_p = log(p)
    tlog_p = log_p[np.arange(N), t.data]
    y = -1 * sum(tlog_p) / N
    return y


################################################################
