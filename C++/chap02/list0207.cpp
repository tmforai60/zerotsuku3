// �ǂݍ��񂾐����l�̌����i�[���^�P���^�Q���ȏ�j�𔻒�

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (n == 0)								// �[��
		cout << "���̒l�̓[���ł��B\n";
	else if (n >= -9 && n <= 9)				// �P��
		cout << "���̒l�͂P���ł��B\n";
	else									// �Q���ȏ�
		cout << "���̒l�͂Q���ȏ�ł��B\n";
}
