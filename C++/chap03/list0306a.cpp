// 読み込んだ個数だけ*を表示
// 別解：iの初期値は1

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
			cout << '*';
			i++;
		}
		cout << '\n';
	}
}
