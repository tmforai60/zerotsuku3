// �ǂݍ��񂾓�̐����l�̏������ق��̒l��\���i���̂Q�F�������Z�q�j

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	int min = a < b ? a : b;		// �������ق��̒l

	cout << "�������ق��̒l��" << min << "�ł��B\n";
}
