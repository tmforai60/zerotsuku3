// �e��̐����^�ƕϐ��̑傫����\��

#include <iostream>

using namespace std;

int main()
{
	char c;
	cout << "char�^�̑傫�� �F" << sizeof(char) << '\n';
	cout << "�ϐ�c�̑傫��  �F" << sizeof(c)    << '\n';

	short h;
	cout << "short�^�̑傫���F" << sizeof(short) << '\n';
	cout << "�ϐ�h�̑傫��  �F" << sizeof(h)     << '\n';

	int i;
	cout << "int�^�̑傫��  �F" << sizeof(int) << '\n';
	cout << "�ϐ�i�̑傫��  �F" << sizeof(i)   << '\n';

	long l;
	cout << "long�^�̑傫�� �F" << sizeof(long) << '\n';
	cout << "�ϐ�l�̑傫��  �F" << sizeof(l)    << '\n';
}
