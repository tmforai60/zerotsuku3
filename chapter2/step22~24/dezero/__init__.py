# dezeroをインポートしたときに最初に実行されるファイル
# ここでcore_simpleから呼び出しておくことで、オーバーロードができる
from dezero.core_simple import Variable
from dezero.core_simple import Function
from dezero.core_simple import using_config
from dezero.core_simple import no_grad
from dezero.core_simple import as_array
from dezero.core_simple import as_variable
from dezero.core_simple import setup_variable

# dezeroが呼び出されると同時に特殊メソッドの設定も行う
setup_variable()