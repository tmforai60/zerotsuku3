// ���ʔԍ��N���XIdNo�i��P�Łj�̗��p��

#include <iostream>
#include "IdNo.h"

using namespace std;

int main()
{
	IdNo a;		// ���ʔԍ�1��
	IdNo b;		// ���ʔԍ�2��
	IdNo c[4];	// ���ʔԍ�3�ԁ`6��

	cout << "a�̎��ʔԍ��F" << a.id() << '\n';
	cout << "b�̎��ʔԍ��F" << b.id() << '\n';
	for (int i = 0; i < 4; i++)
		cout << "c[" << i << "]�̎��ʔԍ��F" << c[i].id() << '\n';
}
