// ���ʔԍ��N���XIdNo�i��Q�Łj�̗��p��

#include <iostream>
#include "IdNo.h"

using namespace std;

int main()
{
	IdNo a;		// ���ʔԍ�1��
	IdNo b;		// ���ʔԍ�2��

	cout << "a�̎��ʔԍ��F" << a.id() << '\n';
	cout << "b�̎��ʔԍ��F" << b.id() << '\n';
	cout << "���݂܂łɗ^�������ʔԍ��̍ő�l�F" << IdNo::get_max_id() << '\n';
}
