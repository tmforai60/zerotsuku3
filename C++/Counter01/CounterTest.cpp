// �J�E���^�N���XCounter�i��P�Łj�̗��p��

#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
	int no;
	Counter x;

	cout << "���݂̃J�E���^�F" << x.value() << '\n';

	cout << "�J�E���g�A�b�v�񐔁F";
	cin >> no;

	for (int i = 0; i < no; i++) {
		x.increment();					// �J�E���g�A�b�v
		cout << x.value() << '\n';
	}

	cout << "�J�E���g�_�E���񐔁F";
	cin >> no;

	for (int i = 0; i < no; i++) {
		x.decrement();					// �J�E���g�_�E��
		cout << x.value() << '\n';
	}
}
