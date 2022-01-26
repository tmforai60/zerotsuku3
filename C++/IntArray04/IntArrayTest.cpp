// �����z��N���XIntArray�i��S�Łj�̗��p��

#include <new>
#include <iostream>
#include "IntArray.h"

using namespace std;

//--- �v�f��size�̔z���num�̃f�[�^�������ĕ\�� --//
void f(int size, int num)
{
	try {
		IntArray x(size);
		for (int i = 0; i < num; i++) {
			x[i] = i;
			cout << "x[" << i << "] = " << x[i] << '\n';
		}
	}

	catch (IntArray::IdxRngErr& x) {
		cout << "�Y���I�[�o�t���[�F" << x.index() << '\n';
		return;
	}

	catch (bad_alloc) {
		cout << "�������̊m�ۂɎ��s���܂����B\n";
		exit(1);				// �����I��
	}
}

int main()
{
	int size, num;

	cout << "�v�f���F";
	cin >> size;

	cout << "�f�[�^���F";
	cin >> num;

	f(size, num);

	cout << "main�֐��I���B\n";
}
