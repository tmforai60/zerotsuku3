// �����������p�̓񓙕ӎO�p�`��\��

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "�������p�̓񓙕ӎO�p�`��\�����܂��B\n";
	cout << "�i���́F";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)	// i��'*'��\��
			cout << '*';
		cout << '\n';
	}
}
