// ��s�����N���X�i��U�ŁF�\�[�X���j

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

//--- �R���X�g���N�^ ---//
Account::Account(string name, string num, long amnt, const Date& op) :
				 full_name(name), number(num), crnt_balance(amnt), open(op)
{

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