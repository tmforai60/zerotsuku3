// ��̎����l��ǂݍ���ŉ����揜�����l��\��

#include <iostream>

using namespace std;

int main()
{
	double x;		// �����揜����l
	double y;		// �����揜����l

	cout << "x��y�������揜���܂��B\n";

	cout << "x�̒l�F";		// x�̒l�̓��͂𑣂�
	cin >> x;				// x�Ɏ����l��ǂݍ���

	cout << "y�̒l�F";		// y�̒l�̓��͂𑣂�
	cin >> y;				// y�Ɏ����l��ǂݍ���

	cout << "x + y��" << x + y << "�ł��B\n";	// x + y�̒l��\��
	cout << "x - y��" << x - y << "�ł��B\n";	// x - y�̒l��\��
	cout << "x * y��" << x * y << "�ł��B\n";	// x * y�̒l��\��
	cout << "x / y��" << x / y << "�ł��B\n";	// x / y�̒l��\��
}
