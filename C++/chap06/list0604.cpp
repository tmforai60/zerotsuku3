// ��̐����l�̍ő�l�����߂�i�֐��Łj

#include <iostream>

using namespace std;

//--- a, b�̍ő�l��ԋp ---//
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	cout << "�ő�l��" << max(a, b) << "�ł��B\n";
}
