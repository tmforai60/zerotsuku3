// �z��̊e�v�f��1, 2, 3, 4, 5�������ĕ\��

#include <iostream>

using namespace std;

int main()
{
	int a[5];	// int[5]�^�̔z��i�v�f�^��int�^�ŗv�f��5�̔z��j

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	cout << "a[" << 0 << "] = " << a[0] << '\n';
	cout << "a[" << 1 << "] = " << a[1] << '\n';
	cout << "a[" << 2 << "] = " << a[2] << '\n';
	cout << "a[" << 3 << "] = " << a[3] << '\n';
	cout << "a[" << 4 << "] = " << a[4] << '\n';
}
