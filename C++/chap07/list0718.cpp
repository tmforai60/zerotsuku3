// �����z��I�u�W�F�N�g�𓮓I�ɐ���

#include <iostream>

using namespace std;

int main()
{
	int asize;					// �z��̗v�f��
	cout << "�v�f���F";
	cin >> asize;

	int* a = new int[asize];	// ����

	for (int i = 0; i < asize; i++)
		a[i] = i;

	for (int i = 0; i < asize; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	delete[] a;					// �j��
}
