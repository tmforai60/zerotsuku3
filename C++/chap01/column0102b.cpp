// �����̐����i���s���邽�тɈقȂ闐���𐶐��j

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));		// ���݂̎�������������

	int x = rand();			// 0�ȏ�RAND_MAX�ȉ��̗����𐶐�
	int y = rand();			// 0�ȏ�RAND_MAX�ȉ��̗����𐶐�

	cout << "x�̒l��" << x << "�ŁAy�̒l��" << y << "�ł��B\n";
}
