import dezero.functions as F
import dezero.layers as L
from dezero import Layer, utils


# Baseモデル
class Model(Layer):
    def plot(self, *inputs, to_file="model.png"):
        y = self.forward(*inputs)
        return utils.plot_dot_graph(y, verbose=True, to_file=to_file)


# Full connectモデル
class MLP(Model):
    def __init__(self, fc_output_sizes, activation=F.sigmoid):
        super().__init__()
        self.activation = activation
        self.layers = []

        # fc_output_sizesの要素数だけDense層を追加
        for i, out_size in enumerate(fc_output_sizes):
            layer = L.Linear(out_size=out_size)
            setattr(self, "l" + str(i), layer)
            self.layers.append(layer)

    def forward(self, x):
        for l in self.layers[:-1]:
            x = self.activation(l(x))
        return self.layers[-1](x)
