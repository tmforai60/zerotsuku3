// �ǂݍ��񂾓�̐����l�̏������ق��̒l��\���i�ʉ��F�u���b�N�𓱓��j

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	int min;		// �������ق��̒l
	if (a < b) {
		min = a;
	} else {
		min = b;
	}

	cout << "�������ق��̒l��" << min << "�ł��B\n";
}
