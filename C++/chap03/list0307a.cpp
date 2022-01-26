// 読み込んだ個数だけ+と-を交互に表示
// 別解：奇数・偶数をn回判定

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個表示しますか：";
	cin >> n;

	if (n > 0) {
		int i = 1;
		while (i <= n) {
			if (i % 2)		// 奇数
				cout << '+';
			else			// 偶数
				cout << '-';
			i++;
		}
		cout << '\n';
	}
}
