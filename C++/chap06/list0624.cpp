// �z��̗v�f�ւ̎Q�Ƃ�ԋp����֐�

#include <iostream>

using namespace std;

const int a_size = 5;		// �z��a�̗v�f��

//--- a[idx]�ւ̎Q�Ƃ�ԋp ---//
int& r(int idx)
{
	static int a[a_size];
	return a[idx];			// a[idx]�ւ̎Q�Ƃ�ԋp
}

int main()
{
	for (int i = 0; i < a_size; i++)
		r(i) = i;

	for (int i = 0; i < a_size; i++)
		cout << "r(" << i << ") = " << r(i) << '\n';
}
