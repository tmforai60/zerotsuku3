// �Q�ƃI�u�W�F�N�g�̎Q�Ɛ������

#include <iostream>

using namespace std;

int main()
{
	double     d = 1.0;		// d��double�^�i�l��1.0�j
	const int& p = 5;		// p�͒萔���Q�ƁH
	const int& q = d;		// q��double�^���Q�ƁH

	const_cast<int&>(q) = 3.14;		// 3.14�̑�����int����Ƃ�double�H

	cout << "d = " << d << '\n';
	cout << "p = " << p << '\n';
	cout << "q = " << q << '\n';
}
