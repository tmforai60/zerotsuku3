// 整数オブジェクトを動的に生成（初期化子による初期化）

#include <iostream>

using namespace std;

int main()
{
	int* x = new int(5);		// 生成：初期化子付き

	cout << "*x = " << *x << '\n';

	delete x;					// 破棄
}
