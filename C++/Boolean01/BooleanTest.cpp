// �^���l�N���XBoolean�̗��p��

#include <iostream>
#include "Boolean.h"

using namespace std;

//--- ��̐���x��y�����������ǂ��� ---//
Boolean int_eq(int x, int y)
{
	return x == y;
}

int main()
{
	int n;
	Boolean a;			// a �� False�F�f�t�H���g�R���X�g���N�^
	Boolean b = a;		// b �� False�F�R�s�[�R���X�g���N�^
	Boolean c = 100;	// c �� True �F�ϊ��R���X�g���N�^
	Boolean x[8];		// x[0]�`x[7] �� False�F�f�t�H���g�R���X�g���N�^

	cout << "�����l�F";
	cin >> n;
	x[0] = int_eq(n, 5);		// x[0]
	x[1] = (n != 3);			// x[1] �� Boolean(n != 3)
	x[2] = Boolean::False;		// x[2] �� False
	x[3] = 1000;				// x[3] �� True�FBoolean(1000)
	x[4] = c == Boolean::True;	// x[4] �� Boolean(c == True)

	cout << "a�̒l�F" << int(a) << '\n';
	cout << "b�̒l�F" << static_cast<const char*>(b) << '\n';

	for (int i = 0; i < 8; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
}
