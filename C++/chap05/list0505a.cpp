// �z��̊e�v�f��1, 2, 3, 4, 5, 6�ŏ��������ĕ\���i�v�f�����v�Z�ɂ���ċ��߂�j

#include <iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int a_size = sizeof(a) / sizeof(a[0]);	// �z��a�̗v�f��

	for (int i = 0; i < a_size; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
