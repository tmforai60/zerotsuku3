// �ǂݍ��񂾐����l�̌����i�Q���ȏォ�ǂ����j�𔻒�

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (n <= -10 || n >= 10)				// �Q���ȏ�
		cout << "���̒l�͂Q���ȏ�ł��B\n";
	else									// �Q������
		cout << "���̒l�͂Q�������ł��B\n";
}
