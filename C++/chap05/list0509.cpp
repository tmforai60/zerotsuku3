// �z��̑S�v�f���R�s�[���ĕ\��

#include <iostream>

using namespace std;

int main()
{
	const int n = 5;	// �z��a��b�̗v�f��
	int a[n];			// �R�s�[���z��
	int b[n] = {0};		// �R�s�[��z��i�S�v�f��0�ŏ������j

	for (int i = 0; i < n; i++) {	// �z��a�̗v�f�ɒl��ǂݍ���
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)		// �z��a�̑S�v�f��z��b�ɃR�s�[
		b[i] = a[i];

	for (int i = 0; i < n; i++)		// �z��b�̑S�v�f�̒l��\��
		cout << "b[" << i << "] = " << b[i] << '\n';
}
