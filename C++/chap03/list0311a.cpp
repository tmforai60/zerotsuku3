// 読み込んだ個数だけ*を表示（for文）

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個*を表示しますか：";
	cin >> n;

	if (n > 0) {
		for (int i = 1; i <= n; i++)
			cout << '*';
		cout << '\n';
	}
}
