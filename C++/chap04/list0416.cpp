// 0.0����1.0�܂�0.001�P�ʂő��₵�č��v��\���i�J�Ԃ���int�Ő���j

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float sum = 0.0F;
	cout << fixed << setprecision(6);
	for (int i = 0; i <= 1000; i++) {
		float x = static_cast<float>(i) / 1000;
		cout << "x = " << x << '\n';
		sum += x;
	}
	cout << "sum = " << sum << '\n';
}
