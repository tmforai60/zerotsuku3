// 読み込んだ整数値はゼロか（別解：==演算子を利用）

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	if (n == 0)
		cout << "その値はゼロです。\n";
	else
		cout << "その値はゼロではありません。\n";
}
