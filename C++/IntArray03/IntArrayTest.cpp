// �����z��N���XIntArray�i��R�Łj�̗��p��

#include <iomanip>
#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	int n;
	cout << "a�̗v�f���F";
	cin >> n;

	IntArray a(n);		// �v�f��n�̔z��

	for (int i = 0; i < a.size(); i++)
		a[i] = i;

	IntArray b(128);	// �v�f��128�̔z��
	IntArray c(256);	// �v�f��256�̔z��

	cout << "b��c�̗v�f����" << b.size() << "��" << c.size();
	c = b = a;					// ��  ��
	cout << "����" << b.size() << "��" << c.size() << "�ɕς��܂����B\n";

	IntArray d = b;				// ������

	cout << "    a    b    c    d\n";
	cout << "---------------------\n";
	for (int i = 0; i < n; i++) {
		cout << setw(5) << a[i] << setw(5) << b[i]
			 << setw(5) << c[i] << setw(5) << d[i] << '\n';
	}
}
