// �Q�����z��̗v�f���E�\���v�f����\��

#include <iostream>

using namespace std;

int main()
{
	int a[4][3];

	cout << "�z��a��"	 << sizeof(a)    / sizeof(a[0])    << "�s"
						 << sizeof(a[0]) / sizeof(a[0][0]) << "��ł��B\n";

	cout << "�\���v�f��" << sizeof(a)    / sizeof(a[0][0]) << "�ł��B\n";
}
