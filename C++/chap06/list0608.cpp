// ���������p�̒��p�񓙕ӎO�p�`��\���i�֐��Łj

#include <iostream>

using namespace std;

//--- ����'*'��n�A���\�� ---//
void put_stars(int n)
{
	while (n-- > 0)
		cout << '*';
}

int main()
{
	int n;

	cout << "�������p�̓񓙕ӎO�p�`��\�����܂��B\n";
	cout << "�i���́F";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		put_stars(i);
		cout << '\n';
	}
}
