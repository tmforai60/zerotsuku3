// ��̈����̒l����������֐�

#include <iostream>

using namespace std;

//--- ����x��y�̒l������ ---//
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a, b;

	cout << "�ϐ�a�F";   cin >> a;
	cout << "�ϐ�b�F";   cin >> b;

	swap(a, b);			// a��b������

	cout << "�ϐ�a��b�̒l���������܂����B\n";
	cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
	cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
}