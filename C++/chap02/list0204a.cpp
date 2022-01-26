// 読み込んだ整数値はゼロか（別解：!演算子を使わない）

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	if (n)
		cout << "その値はゼロではありません。\n";
	else
		cout << "その値はゼロです。\n";
}
