// ���̐����l���O�܂ŃJ�E���g�_�E���i���̂Q�j

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "�J�E���g�_�E�����܂��B\n";
	do {
		cout << "���̐����l�F";
		cin >> x;
	} while (x <= 0);

	while (x >= 0)
		cout << x-- << "\n";	// x�̒l��\�����ăf�N�������g
}
