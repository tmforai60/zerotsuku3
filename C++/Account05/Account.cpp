// ��s�����N���X�i��T�ŁF�\�[�X���j

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

//--- �R���X�g���N�^ ---//
Account::Account(string name, string num, long amnt, int y, int m, int d)
														 : open(y, m, d)
{
	full_name = name;		// �������`
	number = num;			// �����ԍ�
	crnt_balance = amnt;	// �a���c��
}

//--- �a���� ---//
void Account::deposit(long amnt)
{
	crnt_balance += amnt;
}

//--- ���낷 ---//
void Account::withdraw(long amnt)
{
	crnt_balance -= amnt;
}
