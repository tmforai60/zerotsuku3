// �z��̊e�v�f��1, 2, 3, 4, 5�������ĕ\���ifor���j

#include <iostream>

using namespace std;

int main()
{
	int a[5];	// int[5]�^�̔z��i�v�f�^��int�^�ŗv�f��5�̔z��j

	for (int i = 0; i < 5; i++)
		a[i] = i + 1;

	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}
