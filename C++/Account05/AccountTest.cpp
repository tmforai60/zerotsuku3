// ��s�����N���X�i��T�Łj�̗��p��

#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account suzuki("��ؗ���", "12345678", 1000, 2125, 1, 24);  // ��،N�̌���
	Account takeda("���c�_��", "87654321",  200, 2123, 7, 15);  // ���c�N�̌���

	suzuki.withdraw(200);	// ��،N��200�~���낷
	takeda.deposit(100);	// ���c�N��100�~�a����

	cout << "��،N�̌���\n";
	cout << "�������`��" << suzuki.name() << '\n';
	cout << "�����ԍ���" << suzuki.no() << '\n';
	cout << "�a���c����" << suzuki.balance() << "�~\n";
	cout << "�J �� ����" << suzuki.opening_date() << '\n';

	cout << "\n���c�N�̌���\n";
	cout << "�������`��" << takeda.name() << '\n';
	cout << "�����ԍ���" << takeda.no() << '\n';
	cout << "�a���c����" << takeda.balance() << "�~\n";
	cout << "�J �� ����" << takeda.opening_date().year()  << "�N"
						 << takeda.opening_date().month() << "��"
						 << takeda.opening_date().day()   << "��\n";
}
