// �ǂݍ��񂾓�̐����l�̍���\��

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	cout << "����" << (a < b ? b - a : a - b) << "�ł��B\n";
}
