// �e��̕ϐ���萔�̌^����\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	char c;
	short h;
	int i;
	long l;

	cout << "�ϐ�c�̌^�F" << typeid(c).name() << '\n';
	cout << "�ϐ�h�̌^�F" << typeid(h).name() << '\n';
	cout << "�ϐ�i�̌^�F" << typeid(i).name() << '\n';
	cout << "�ϐ�l�̌^�F" << typeid(l).name() << '\n';

	cout << "�������e����'A'�̌^�F"   << typeid('A').name()   << '\n';
	cout << "�������e����100�̌^�F"   << typeid(100).name()   << '\n';
	cout << "�������e����100U�̌^�F"  << typeid(100U).name()  << '\n';
	cout << "�������e����100L�̌^�F"  << typeid(100L).name()  << '\n';
	cout << "�������e����100UL�̌^�F" << typeid(100UL).name() << '\n';
}
