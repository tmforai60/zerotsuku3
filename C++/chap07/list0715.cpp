// ���`�T���i��Q�Łj

#include <iostream>

using namespace std;

//--- �z��a�̐擪n�̗v�f����lkey����`�T���i��Q�Łj---//
int seq_search(int* a, int n, int key)
{
	int* p = a;

	while (n-- > 0) {
		if (*p == key)			// �T������
			return p - a;
		else
			p++;
	}
	return -1;					// �T�����s
}

int main()
{
	int key, idx;
	int x[7];
	int x_size = sizeof(x) / sizeof(x[0]);		// �z��x�̗v�f��

	for (int i = 0; i < x_size; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}
	cout << "�T���l�́F";
	cin >> key;

	if ((idx = seq_search(x, x_size, key)) != -1)
		cout << "���̒l�����v�f��x[" << idx << "]�ł��B\n";
	else
		cout << "������܂���ł����B\n";
}
