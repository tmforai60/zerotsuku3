// #if�w�߂ɂ��v���O�����̃R�����g�A�E�g

#include <iostream>

using namespace std;

#define DEBUG	0

int main()
{
	int a = 5;
	int x = 7;

#if DEBUG == 1
	a = x;				// a��x����
#endif

	cout << "a�̒l��" << a << "�ł��B\n";
}
