// 1からnまでの和を求める
// 条件を通過する際のiとsumの値を表示

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "1からnまでの和を求めます。\n";
	do {
		cout << "nの値：";
		cin >> n;
	} while (n <= 0);

	int sum = 0;		// 合計
	int i = 1;

	while (cout << "i = " << i << " sum = " << sum << '\n', i <= n) {
		sum += i;		// sumにiを加える
		i++;			// iをインクリメント
	}

	cout << "1から" << n << "までの和は" << sum << "です。\n";
}
