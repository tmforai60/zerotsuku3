// �������z��̌^�Ɨv�f�^��\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5][3];		// �Q�����z��
	double b[4][2][3];	// �R�����z��

	cout << "�z��a�̌^�F" << typeid(a).name()    << '\n';
	cout << "a�̗v�f�^�F" << typeid(a[0]).name() << '\n';
	cout << "�z��b�̌^�F" << typeid(b).name()    << '\n';
	cout << "b�̗v�f�^�F" << typeid(b[0]).name() << '\n';
}
