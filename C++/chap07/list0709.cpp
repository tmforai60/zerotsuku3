// �z��̗v�f�̕��т𔽓]����i�֐��Łj

#include <iostream>

using namespace std;

//--- �v�f��n�̔z��a�̕��т𔽓]���� ---//
void reverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

int main()
{
	const int n = 5;				// �z��c�̗v�f��
	int c[n];

	for (int i = 0; i < n; i++) {	// �e�v�f�ɒl��ǂݍ���
		cout << "c[" << i << "] : ";
		cin >> c[i];
	}
	reverse(c, n);					// �z��c�̗v�f�̕��т𔽓]����

	cout << "�v�f�̕��т𔽓]���܂����B\n";
	for (int i = 0; i < n; i++)		// �z��c��\��
		cout << "c[" << i << "] = " << c[i] << '\n';
}
