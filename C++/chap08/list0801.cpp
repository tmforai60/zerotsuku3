// �����񃊃e�����̌^�Ƒ傫����\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	cout << "�������񃊃e����\"ABC\"\n";
	cout << "  �^�F"     << typeid("ABC").name()
		 << "  �傫���F" << sizeof("ABC") << "\n\n";

	cout << "�������񃊃e����\"\"\n";
	cout << "  �^�F"     << typeid("").name()
		 << "  �傫���F" << sizeof("") << "\n\n";

	cout << "�������񃊃e����\"ABC\\0DEF\"\n";
	cout << "  �^�F"     << typeid("ABC\0DEF").name()
		 << "  �傫���F" << sizeof("ABC\0DEF") << "\n";
}
