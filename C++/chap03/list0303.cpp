// �����ăQ�[���i0�`99�𓖂Ă�����j

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));		// �����̎��ݒ�

	int no = rand() % 100;	// ���Ă�ׂ����F0�`99�̗����𐶐�
	int x;					// �L�[�{�[�h����ǂݍ��񂾒l

	cout << "�����ăQ�[���J�n!!\n";
	cout << "0�`99�̐��𓖂ĂĂ��������B\n";

	do {
		cout << "�������ȁF";
		cin >> x;

		if (x > no)
			cout << "\a�����Ə����Ȑ�����B\n";
		else if (x < no)
			cout << "\a�����Ƒ傫�Ȑ�����B\n";
	} while (x != no);

	cout << "�����ł��B\n";
}
