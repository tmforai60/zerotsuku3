// ��s�����N���X�i��Q�Łj�Ƃ��̗��p��

#include <string>
#include <iostream>

using namespace std;

class Account {
private:
	string full_name;		// �������`
	string number;			// �����ԍ�
	long crnt_balance;		// �a���c��

public:
	//--- �R���X�g���N�^ ---//
	Account(string name, string num, long amnt) {
		full_name = name;		// �������`
		number = num;			// �����ԍ�
		crnt_balance = amnt;	// �a���c��
	}

	//--- �������`�𒲂ׂ� ---//
	string name() {
		return full_name;
	}

	//--- �����ԍ��𒲂ׂ� ---//
	string no() {
		return number;
	}

	//--- �a���c���𒲂ׂ� ---//
	long balance() {
		return crnt_balance;
	}

	//--- �a���� ---//
	void deposit(long amnt) {
		crnt_balance += amnt;
	}

	//--- ���낷 ---//
	void withdraw(long amnt) {
		crnt_balance -= amnt;
	}
};

int main()
{
	Account suzuki("��ؗ���", "12345678", 1000);		// ��،N�̌���
	Account takeda("���c�_��", "87654321",  200);		// ���c�N�̌���

	suzuki.withdraw(200);			// ��،N��200�~���낷
	takeda.deposit(100);			// ���c�N��100�~�a����

	cout << "����،N�̌����F\"" << suzuki.name() << "\" (" << suzuki.no()
		 << ") " << suzuki.balance() << "�~\n";

	cout << "�����c�N�̌����F\"" << takeda.name() << "\" (" << takeda.no()
		 << ") " << takeda.balance() << "�~\n";
}
