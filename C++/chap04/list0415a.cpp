// 0.0����1.0�܂�0.001�P�ʂő��₵�č��v��\���i�J�Ԃ���float�Ő���j
// �ʉ��F���ifor���̌p�������̔��肪����Ă���j

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float sum = 0.0F;
	cout << fixed << setprecision(6);
	for (float x = 0.0F; x != 1.0F; x += 0.001F) {
		cout << "x = " << x << '\n';
		sum += x;
	}
	cout << "sum = " << sum << '\n';
}
