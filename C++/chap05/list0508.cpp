// �z��̗v�f�̕��т𔽓]���ĕ\��

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	const int n = 7;		// �z��a�̗v�f��
	int a[n];

	srand(time(NULL));		// �����̎��������
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << "a[" << i << "] = " << a[i] << '\n';
	}

	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}

	cout << "�v�f�̕��т𔽓]���܂����B\n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
