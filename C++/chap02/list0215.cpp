// ��̕ϐ����~���i�傫�����j�Ƀ\�[�g

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "�ϐ�a�F";   cin >> a;
	cout << "�ϐ�b�F";   cin >> b;

	if (a == b) {
		cout << "��̒l�͓����ł��B\n";
	} else {
		if (a < b) {		// a��b��菬�������
			int t = a;		// �����̒l������
			a = b;
			b = t;
		}
		cout << "a��b�ƂȂ�悤�Ƀ\�[�g���܂����B\n";
		cout << "�ϐ�a��" << a << "�ł��B\n";
		cout << "�ϐ�b��" << b << "�ł��B\n";
	}
}
