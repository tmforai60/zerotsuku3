// ��s�����N���X�i��U�Łj�̗��p��

#include <iostream>
#include "Date.h"
#include "Account.h"

using namespace std;

int main()
{
	// ��،N�̌���
	Account suzuki("��ؗ���", "12345678", 1000, Date(2125, 1, 24));
	string dw[] = {"��", "��", "��", "��", "��", "��", "�y"};

	cout << "��،N�̌���\n";
	cout << "�������`��" << suzuki.name() << '\n';
	cout << "�����ԍ���" << suzuki.no() << '\n';
	cout << "�a �� �z��" << suzuki.balance() << "�~\n";
	cout << "�J �� ����" << suzuki.opening_date();
	cout << "�i" << dw[suzuki.opening_date().day_of_week()] << "�j\n";
}
