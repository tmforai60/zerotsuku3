// ��s�����N���X�i��P�Łj�Ƃ��̗��p��

#include <string>
#include <iostream>

using namespace std;

class Account {
public:
	string name;	// �������`
	string number;	// �����ԍ�
	long balance;	// �a���c��
};

int main()
{
	Account suzuki;		// ��،N�̌���
	Account takeda;		// ���c�N�̌���

	suzuki.name    = "��ؗ���";	// ��،N�̌������`
	suzuki.number  = "12345678";	// �@�V�@�̌����ԍ�
	suzuki.balance = 1000;			// �@�V�@�̗a���c��

	takeda.name    = "���c�_��";	// ���c�N�̌������`
	takeda.number  = "87654321";	// �@�V�@�̌����ԍ�
	takeda.balance = 200;			// �@�V�@�̗a���c��

	suzuki.balance -= 200;			// ��،N��200�~���낷
	takeda.balance += 100;			// ���c�N��100�~�a����

	cout << "����،N�̌����F\"" << suzuki.name << "\" (" << suzuki.number
		 << ") " << suzuki.balance << "�~\n";

	cout << "�����c�N�̌����F\"" << takeda.name << "\" (" << takeda.number
		 << ") " << takeda.balance << "�~\n";
}
