# モジュールが読み込まれた時に最初に実行されるソース

# core_simpleモード
is_simple_core = False
# is_simple_core = True

if is_simple_core:
    from dezero.core_simple import (
        Function,
        Variable,
        as_array,
        as_variable,
        no_grad,
        setup_variable,
        using_config,
    )
else:
    from dezero.core import (
        Function,
        Parameter,
        Variable,
        as_array,
        as_variable,
        no_grad,
        setup_variable,
        using_config,
    )
    from dezero.datasets import Dataset

import dezero.datasets
import dezero.functions
import dezero.utils
from dezero.layers import Layer
from dezero.models import Model

setup_variable()
