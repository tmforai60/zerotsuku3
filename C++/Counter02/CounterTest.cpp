// �J�E���^�N���XCounter�i��Q�Łj�̗��p��

#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
	int no;
	Counter x;
	Counter y;

	cout << "�J�E���g�A�b�v�񐔁F";
	cin >> no;

	for (int i = 0; i < no; i++)		// �J�E���g�A�b�v�ix�͌�u��y�͑O�u�j
		cout << x++ << ' ' << ++y << '\n';

	cout << "�J�E���g�_�E���񐔁F";
	cin >> no;

	for (int i = 0; i < no; i++)		// �J�E���g�_�E���ix�͌�u��y�͑O�u�j
		cout << x-- << ' ' << --y << '\n';

	if (!x)								// �_���ے艉�Z�q�ɂ�锻��
		cout << "x��0�ł��B\n";
	else 
		cout << "x��0�ł͂���܂���B\n";
}
