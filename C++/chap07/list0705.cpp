// ��̐����l�̘a�Ɛς��֐��ɂ���ċ��߂�

#include <iostream>

using namespace std;

//--- x��y�̘a�Ɛς�*sum��*mul�ɋ��߂� ---//
void sum_mul(int x, int y, int* sum, int* mul)
{
	*sum = x + y;		// x��y�̘a��*sum�ɑ��
	*mul = x * y;		// x��y�̐ς�*mul�ɑ��
}

int main()
{
	int a, b;
	int wa = 0, seki = 0;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	sum_mul(a, b, &wa, &seki);		// a��b�̘a�Ɛς����߂�

	cout << "�a��" << wa   << "�ł��B\n";
	cout << "�ς�" << seki << "�ł��B\n";
}
