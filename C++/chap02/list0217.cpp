// �ǂݍ��񂾎����l��10�Ŋ���؂�邩

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double x;

	cout << "�����l�F";
	cin >> x;

	if (double m = fmod(x, 10)) {
		cout << "���̒l��10�Ŋ���؂�܂���B\n";
		cout << "��]��" << m << "�ł��B\n";
	} else {
		cout << "���̒l��10�Ŋ���؂�܂��B\n";
	}
}
