// �E�������p�̒��p�񓙕ӎO�p�`��\���i�֐��Łj

#include <iostream>

using namespace std;

//--- ����c��n�A���\�� ---//
void put_nchar(char c, int n)
{
	while (n-- > 0)
		cout << c;
}

//--- ����'*'��n�A���\�� ---//
void put_stars(int n)
{
	put_nchar('*', n);		// put_nchar�֐��ɏ������䂾�˂�
}

int main()
{
	int n;

	cout << "�E�����p�̓񓙕ӎO�p�`��\�����܂��B\n";
	cout << "�i���́F";
	cin >> n;

	for (int i = 1; i <= n; i++) {	// �S����n�s
		put_nchar(' ', n - i);		// ����' '��n - i�\��
		put_stars(i);				// ����'*'��i�\��
		cout << '\n';				// ���s����
	}
}
