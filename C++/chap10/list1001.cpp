// ��،N�ƕ��c�N�̋�s����

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string suzuki_name    = "��ؗ���";		// ��،N�̌������`
	string suzuki_number  = "12345678";		// �@�V�@�̌����ԍ�
	long   suzuki_balance = 1000;			// �@�V�@�̗a���c��

	string takeda_name    = "���c�_��";		// ���c�N�̌������`
	string takeda_number  = "87654321";		// �@�V�@�̌����ԍ�
	long   takeda_balance = 200;			// �@�V�@�̗a���c��

	suzuki_balance -= 200;					// ��،N��200�~���낷
	takeda_balance += 100;					// ���c�N��100�~�a����

	cout << "����،N�̌����F\"" << suzuki_name << "\" (" << suzuki_number
		 << ") " << suzuki_balance << "�~\n";

	cout << "�����c�N�̌����F\"" << takeda_name << "\" (" << takeda_number
		 << ") " << takeda_balance << "�~\n";
}
