// ���ؗp�E���ʔԍ��N���XIdNo�̗��p��

#include <iostream>
#include "VerId.h"

using namespace std;

int main()
{
	VerId a;		// ���ʔԍ�1��
	VerId b;		// ���ʔԍ�2��

	cout << "a�̎��ʔԍ��F" << a.id() << '\n';
	cout << "b�̎��ʔԍ��F" << b.id() << '\n';
	cout << "�������ꂽ�I�u�W�F�N�g�̐��F" << VerId::counter << '\n';
	cout << "�������ꂽ�I�u�W�F�N�g�̐��F" << a.counter << '\n';
	cout << "�������ꂽ�I�u�W�F�N�g�̐��F" << b.counter << '\n';
}
