// 1����n�܂ł̘a�����߂�
// ������ʉ߂���ۂ�i��sum�̒l��\��

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "1����n�܂ł̘a�����߂܂��B\n";
	do {
		cout << "n�̒l�F";
		cin >> n;
	} while (n <= 0);

	int sum = 0;		// ���v
	int i = 1;

	while (i <= n) {
		cout << "i = " << i << " sum = " << sum << '\n';
		sum += i;		// sum��i��������
		i++;			// i���C���N�������g
	}
	cout << "i = " << i << " sum = " << sum << '\n';

	cout << "1����" << n << "�܂ł̘a��" << sum << "�ł��B\n";
}
