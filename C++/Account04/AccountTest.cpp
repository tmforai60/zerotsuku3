// ��s�����N���X�i��S�Łj�̗��p��

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

//--- p���w��Account�̌������i�������`�E�����ԍ��E�a���c���j��\�� ---//
void print_Account(string title, Account* p)
{
	cout << title
		 << p->name() << "\" (" << p->no() << ") " << p->balance() << "�~\n";
}

int main()
{
	Account suzuki("��ؗ���", "12345678", 1000);		// ��،N�̌���
	Account takeda("���c�_��", "87654321",  200);		// ���c�N�̌���

	suzuki.withdraw(200);			// ��،N��200�~���낷
	takeda.deposit(100);			// ���c�N��100�~�a����

	print_Account("����،N�̌����F", &suzuki);

	print_Account("�����c�N�̌����F", &takeda);
}
