// �O�̐����l�̍ő�l�����߂�

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;
	cout << "����c�F";   cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "�ő�l��" << max << "�ł��B\n";
}
