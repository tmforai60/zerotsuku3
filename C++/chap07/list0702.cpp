// �|�C���^�̊�{�i�A�h���X���Z�q&�ƊԐډ��Z�q*�j

#include <iostream>

using namespace std;

int main()
{
	int n = 135;
	cout << "n   �F" <<  n << '\n';
	cout << "&n  �F" << &n << "�Ԓn\n";

	int* ptr = &n;		// ptr��n���w��
	cout << "ptr �F" <<  ptr << "�Ԓn\n";
	cout << "*ptr�F" << *ptr << '\n';
}
