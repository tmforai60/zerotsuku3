// �����ăQ�[���i��Q�ŁF���o�͕��j

#include <iostream>
#include "kazuate.h"

using namespace std;

//--- ���͂𑣂� ---//
static void prompt()
{
	cout << "0�`" << max_no << "�̐��F";
}

//--- �𓚂̓��� ---//
int input()
{
	int val;
	do {
		prompt();	// ���͂𑣂�
		cin >> val;
	} while (val < 0 || val > max_no);
	return val;
}

//--- ���s�̊m�F ---//
bool confirm_retry()
{
	int cont;
	cout << "������x���܂����H\n"
		 << "<Yes�c1�^No�c0>�F";
	cin >> cont;
	return static_cast<bool>(cont);
}
