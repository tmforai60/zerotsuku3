// ���t�N���XDate�i��Q�Łj�̗��p��i�����o�֐�preceding_day�̓������m�F�j

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date today;		// ����

	cout << "������" << today << "�ł��B\n";
	cout << "�����" << today.preceding_day() << "�ł��B\n";
}
