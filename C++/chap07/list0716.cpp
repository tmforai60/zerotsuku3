// �����I�u�W�F�N�g�𓮓I�ɐ���

#include <iostream>

using namespace std;

int main()
{
	int* x = new int;			// �����i�L����̊m�ہj

	cout << "�����F";
	cin >> *x;

	cout << "*x = " << *x << '\n';

	delete x;					// �j���i�L����̉���j
}
