// �z��̍ő�l�����߂�i�֐��e���v���[�g�Łj

#include <iostream>

using namespace std;

//--- �v�f��n��Type�^�z��x�̍ő�l��ԋp����֐��e���v���[�g ---//
template <class Type>
Type maxof(const Type x[], int n)
{
	Type max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	return max;
}

int main()
{
	const int isize = 8;	// �z��ix�̗v�f��
	int ix[isize];			// int�^�̔z��

	// �����z��̍ő�l
	cout << isize << "�̐�������͂���B\n";
	for (int i = 0; i < isize; i++) {
		cout << i + 1 << "�F";
		cin >> ix[i];
	}
	cout << "�ő�l��" << maxof(ix, isize) << "�ł��B\n\n";

	const int dsize = 5;	// �z��dx�̗v�f��
	double dx[dsize];		// double�^�̔z��

	// �����z��̍ő�l
	cout << dsize << "�̎�������͂���B\n";
	for (int i = 0; i < dsize; i++) {
		cout << i + 1 << "�F";
		cin >> dx[i];
	}
	cout << "�ő�l��" << maxof(dx, dsize) << "�ł��B\n";
}
