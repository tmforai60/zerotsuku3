// ��̐����l��ǂݍ���ŉ����揜�����l��\��

#include <iostream>

using namespace std;

int main()
{
	int x;		// �����揜����l
	int y;		// �����揜����l

	cout << "x��y�������揜���܂��B\n";

	cout << "x��y�̒l�F";	// x��y�̒l�̓��͂𑣂�
	cin >> x >> y;			// x��y�ɐ����l��ǂݍ���

	cout << "x + y��" << x + y << "�ł��B\n";	// x + y�̒l��\��
	cout << "x - y��" << x - y << "�ł��B\n";	// x - y�̒l��\��
	cout << "x * y��" << x * y << "�ł��B\n";	// x * y�̒l��\��
	cout << "x / y��" << x / y << "�ł��B\n";	// x / y�̒l��\���i���j
	cout << "x % y��" << x % y << "�ł��B\n";	// x % y�̒l��\���i��]�j
}
