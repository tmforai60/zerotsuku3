// �����z��N���XIntArray�i��P�Łj�̗��p��

#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
	int n;

	cout << "�v�f������͂���F";
	cin >> n;

	IntArray x(n);	// �v�f��n�̔z��

	for (int i = 0; i < x.size(); i++)					// �e�v�f�ɒl����
		x[i] = i;

	for (int i = 0; i < x.size(); i++)					// �e�v�f�̒l��\��
		cout << "x[" << i << "] = " << x[i] << '\n';
}
