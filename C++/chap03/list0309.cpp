// ���̐����l��ǂݍ���ŋt����\��

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "���̐����l���t����\�����܂��B\n";
	do {
		cout << "���̐����l�F";
		cin >> x;
	} while (x <= 0);

	cout << "�t����ǂނ�";
	while (x > 0) {
		cout << x % 10;			// x�̍ŉ��ʌ���\��
		x /= 10;				// x��10�Ŋ���
	}
	cout << "�ł��B\n";
}
