// �����ăQ�[���i��P�ŁF���C�����j

#include <iostream>

using namespace std;

void initialize();			//�y�������z �����̎�����݂̎����Ɋ�Â��Đݒ�
void gen_no();				//�y���̍쐬�z 0�`max_no�̒l�𗐐��Ő���
int judge(int cand);		//�y�𓚂̔���z cand���������ǂ����𔻒�
int input();				//�y�𓚂̓��́z 0�`max_no�̒l����͂�����
bool confirm_retry();		//�y���s�̊m�F�z �ăQ�[�����s�������m�F

int max_no = 9;		// ���Ă�ׂ����̍ő�l

int main()
{
	initialize();		// ������
	cout << "�����ăQ�[���J�n�I\n";

	do {
		gen_no();		// ���i���Ă�ׂ����j�̍쐬
		int hantei;
		do {
			hantei = judge(input());	// �𓚂̔���
			if (hantei == 1)
				cout << "\a�����Ə������ł���B\n";
			else if (hantei == 2)
				cout << "\a�����Ƒ傫���ł���B\n";
		} while (hantei != 0);
		cout << "�����ł��B\n";
	} while (confirm_retry());
}