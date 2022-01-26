// 符号無し整数の論理積・論理和・排他的論理和・１の補数を表示
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
	unsigned a, b;

	cout << "非負の整数を二つ入力せよ。\n";
	cout << "a : ";	  cin >> a;
	cout << "b : ";	  cin >> b;

	cout << "a     = ";  print_bits(a);		cout << '\n';
	cout << "b     = ";  print_bits(b);		cout << '\n';
	cout << "a & b = ";  print_bits(a & b);	cout << '\n';	// 論理積
	cout << "a | b = ";  print_bits(a | b);	cout << '\n';	// 論理和
	cout << "a ^ b = ";  print_bits(a ^ b);	cout << '\n';	// 論理差
	cout << "~a    = ";  print_bits(~a);	cout << '\n';	// １の補数
	cout << "~b    = ";  print_bits(~b);	cout << '\n';	// １の補数
}
