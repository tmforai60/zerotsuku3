// �z��I�u�W�F�N�g���J��Ԃ����I�ɐ����i��O�����j

#include <new>
#include <iostream>

using namespace std;

int main()
{
	cout << "�v�f��30000��double�^�z����J��Ԃ��������܂��B\n";

	while (true) {
		try {
			double* a = new double[30000];	// ����
		}
		catch (bad_alloc) {
			cout << "�z��̐����Ɏ��s���܂����̂Ńv���O�����𒆒f���܂��B\n";
			return 1;
		}
	}
}
