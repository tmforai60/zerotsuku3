// 読み込んだ整数値は正の値か？（別解：空文を利用）

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	if (n > 0)
		cout << "その値は正です。\n";
	else
		;							// 空文：nが正でなければ何もしない
}
