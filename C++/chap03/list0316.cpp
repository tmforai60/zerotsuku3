// 右下側が直角の二等辺三角形を表示

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "右下直角の二等辺三角形を表示します。\n";
	cout << "段数は：";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)	// n - i個の' 'を表示
			cout << ' ';
		for (int j = 1; j <= i; j++)		// i個の'*'を表示
			cout << '*';
		cout << '\n';
	}
}
