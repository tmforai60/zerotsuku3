// �z��̌^�Ɨv�f�^��\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5];
	double b[7];

	cout << "�z��a�̌^�F" << typeid(a).name()    << '\n';	// int�̔z��
	cout << "a�̗v�f�^�F" << typeid(a[0]).name() << '\n';	// ���̗v�f

	cout << "�z��b�̌^�F" << typeid(b).name()    << '\n';	// double�̔z��
	cout << "b�̗v�f�^�F" << typeid(b[0]).name() << '\n';	// ���̗v�f
}
