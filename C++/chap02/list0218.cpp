// �ǂݍ��񂾒l�ɉ����ăW�����P���̎��\��

#include <iostream>

using namespace std;

int main()
{
	int hand;

	cout << "���I��ł��������i0�c�O�[�^1�c�`���L�^2�c�p�[�j�F";
	cin >> hand;

	switch (hand) {
	 case 0 : cout << "�O�[\n";	   break;
	 case 1 : cout << "�`���L\n";  break;
	 case 2 : cout << "�p�[\n";	   break;
	}
}
