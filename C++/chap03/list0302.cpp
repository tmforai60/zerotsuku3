// �ǂݍ��񂾒l�ɉ����ăW�����P���̎��\���i0, 1, 2�݂̂��󂯕t����j

#include <iostream>

using namespace std;

int main()
{
	int hand;

	do {
		cout << "���I��ł��������i0�c�O�[�^1�c�`���L�^2�c�p�[�j�F";
		cin >> hand;
	} while (hand < 0 || hand > 2);

	switch (hand) {
	 case 0: cout << "�O�[\n";	   break;
	 case 1: cout << "�`���L\n";   break;
	 case 2: cout << "�p�[\n";	   break;
	}
}
