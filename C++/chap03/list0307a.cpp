// �ǂݍ��񂾌�����+��-�����݂ɕ\��
// �ʉ��F��E������n�񔻒�

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "���\�����܂����F";
	cin >> n;

	if (n > 0) {
		int i = 1;
		while (i <= n) {
			if (i % 2)		// �
				cout << '+';
			else			// ����
				cout << '-';
			i++;
		}
		cout << '\n';
	}
}
