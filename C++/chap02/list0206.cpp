// �ǂݍ��񂾐����l�����ł���΋����^��̕ʂ𔻒肵�ĕ\��

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l�F";
	cin >> n;

	if (n > 0)
		if (n % 2 == 0)
			cout << "���̒l�͋����ł��B\n";
		else
			cout << "���̒l�͊�ł��B\n";
	else
		cout << "\a���łȂ��l�����͂���܂����B\n";
}
