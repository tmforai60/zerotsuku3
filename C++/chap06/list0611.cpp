// �ÎZ�g���[�j���O

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//--- ���s�̊m�F ---//
bool confirm_retry()
{
	int retry;
	do {
		cout << "������x�H<Yes�c1�^No�c0>�F";
		cin >> retry;
	} while (retry != 0 && retry != 1);
	return static_cast<bool>(retry);		// bool�^�ɃL���X�g�����l��ԋp
}

int main()
{
	srand(time(NULL));
	cout << "�ÎZ�g���[�j���O�J�n!!\n";

	do {
		int x = rand() % 900 + 100;		// 3���̐�
		int y = rand() % 900 + 100;		// 3���̐�
		int z = rand() % 900 + 100;		// 3���̐�

		while (true) {
			int k;						// �ǂݍ��񂾒l
			cout << x << " + " << y << " + " << z << " = ";
			cin >> k;
			if (k == x + y + z)			// ����
				break;
			cout << "\a�Ⴂ�܂���!!\n";
		}
	} while (confirm_retry());
}
