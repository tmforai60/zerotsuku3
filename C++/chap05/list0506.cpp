// ninzu�l�̓_����ǂݍ���ō��v�_�E���ϓ_��\��

#include <iostream>

using namespace std;

int main()
{
	const int ninzu = 5;	// �l��
	int tensu[ninzu];		// ninzu�l�̓_��
	int sum = 0;			// ���v

	cout << ninzu << "�l�̓_���̍��v�_�ƕ��ϓ_�����߂܂��B\n";
	for (int i = 0; i < ninzu; i++) {
		cout << i + 1 << "�Ԃ̓_���F";
		cin >> tensu[i];		// tensu[i]��ǂݍ����
		sum += tensu[i];		// sum��tensu[i]��������
	}

	cout << "���v��" << sum << "�_�ł��B\n";
	cout << "���ς�" << static_cast<double>(sum) / ninzu << "�_�ł��B\n";
}
