// �����`�ƒ����`��\��

#include <iostream>

using namespace std;

//--- ����c��n�A���\�� ---//
void put_nchar(char c, int n)
{
	while (n-- > 0)
		cout << c;
}

//--- ����c����ׂĈ�ӂ̒���n�̐����`��\�� ---//
void put_square(int n, char c)
{
	for (int i = 1; i <= n; i++) {		// �S����n�s
		put_nchar(c, n);				// ����c��n�\������
		cout << '\n';					// ���s����
	}
}

//--- ����c����ׂč�����h�ŉ�����w�̒����`��\�� ---//
void put_rectangle(int h, int w, char c)
{
	for (int i = 1; i <= h; i++) {		// �S����h�s
		put_nchar(c, w);				// ����c��w�\������
		cout << '\n';					// ���s����
	}
}

int main()
{
	int n, h, w;

	cout << "�����`��\�����܂��B\n";
	cout << "��ӂ́F";   cin >> n;

	put_square(n, '*');					// ���n�̐����`��'*'�ŕ\��

	cout << "�����`��\�����܂��B\n";
	cout << "�����́F";   cin >> h;
	cout << "�����́F";   cin >> w;

	put_rectangle(h, w, '+');		// ������h�ŉ�����w�̒����`��'+'�ŕ\��
}