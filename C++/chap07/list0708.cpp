// �݂�Ȃ������i�H�j�v���O����

#include <iostream>

using namespace std;

int main()
{
	int a[4];

	0[a] = a[1] = *(a + 2) = *(3 + a) = 7;				// �S�v�f��7����

	for (int i = 0; i < 4; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';	// a[i]�̒l��\��
}
