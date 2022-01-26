// 読み込んだ二つの整数値の小さいほうの値を表示（その２：条件演算子）

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	cout << "小さいほうの値は" << (a < b ? a : b) << "です。\n";
}
