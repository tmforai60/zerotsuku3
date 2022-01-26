// �O�̐����l�������Ƀ\�[�g

#include <iostream>

using namespace std;

//--- ����x��y�̒l������ ---//
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

//--- ����a, b, c�������Ƀ\�[�g ---//
void sort(int& a, int& b, int& c)
{
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
}

int main()
{
	int a, b, c;

	cout << "�ϐ�a�F";   cin >> a;
	cout << "�ϐ�b�F";   cin >> b;
	cout << "�ϐ�c�F";   cin >> c;

	sort(a, b, c);			// a, b, c�������Ƀ\�[�g

	cout << "����a, b, c�������ɕ��ׂ����܂����B\n";
	cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
	cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
	cout << "�ϐ�c�̒l��" << c << "�ł��B\n";
}
