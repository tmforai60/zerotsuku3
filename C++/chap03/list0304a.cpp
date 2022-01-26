// 正の整数値を０までカウントダウン（その１）
// 別解：while文終了後のxの値を表示

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "カウントダウンします。\n";
	do {
		cout << "正の整数値：";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n";	// xの値を表示
		x--;				// xの値をデクリメント（値を一つ減らす）
	}
	cout << x << "\n";	// xの値を表示
}
