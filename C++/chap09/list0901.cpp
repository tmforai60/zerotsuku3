// �z��̍ő�l�����߂�i���d��`�Łj

#include <iostream>

using namespace std;

//--- �v�f��n�̔z��x�̍ő�l��ԋp�iint�Łj---//
int maxof(const int x[], int n)
{
	int max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	return max;
}

//--- �v�f��n�̔z��x�̍ő�l��ԋp�idouble�Łj---//
double maxof(const double x[], int n)
{
	double max = x[0];
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
