// 読み込んだ二つの整数値の差を表示

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	cout << "差は" << (a < b ? b - a : a - b) << "です。\n";
}
