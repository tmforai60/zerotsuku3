// �ǂݍ��񂾐����l��10�Ŋ���؂�邩

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (int mod = n % 10) {
		cout << "���̒l��10�Ŋ���؂�܂���B\n";
		cout << "�ŉ��ʌ���" << mod << "�ł��B\n";
	} else {
		cout << "���̒l��10�Ŋ���؂�܂��B\n";
	}
}
