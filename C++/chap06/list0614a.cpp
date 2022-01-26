// 符号無し整数値を左右にシフトした値を表示
// 別解：numeric_limits<unsigned>::digitsを利用

#include <limits>
#include <iostream>

using namespace std;

//--- unsigned型のビット構成を表示 ---//
void print_bits(unsigned x)
{
	for (int i = numeric_limits<unsigned>::digits - 1; i >= 0; i--)
		cout << ((x >> i) & 1U ? '1' : '0');
}

int main()
{
	unsigned x, n;

	cout << "非負の整数：";			cin >> x;
	cout << "シフトするビット数：";	cin >> n;

	cout << "整数　   = ";  print_bits(x);		 cout << '\n';
	cout << "左シフト = ";  print_bits(x << n);	 cout << '\n';
	cout << "右シフト = ";  print_bits(x >> n);	 cout << '\n';
}
