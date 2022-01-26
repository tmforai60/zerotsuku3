// �������������̘_���ρE�_���a�E�r���I�_���a�E�P�̕␔��\��
// �ʉ��Fnumeric_limits<unsigned>::digits�𗘗p

#include <limits>
#include <iostream>

using namespace std;

//--- unsigned�^�̃r�b�g�\����\�� ---//
void print_bits(unsigned x)
{
	for (int i = numeric_limits<unsigned>::digits - 1; i >= 0; i--)
		cout << ((x >> i) & 1U ? '1' : '0');
}

int main()
{
	unsigned a, b;

	cout << "�񕉂̐��������͂���B\n";
	cout << "a : ";	  cin >> a;
	cout << "b : ";	  cin >> b;

	cout << "a     = ";  print_bits(a);		cout << '\n';
	cout << "b     = ";  print_bits(b);		cout << '\n';
	cout << "a & b = ";  print_bits(a & b);	cout << '\n';	// �_����
	cout << "a | b = ";  print_bits(a | b);	cout << '\n';	// �_���a
	cout << "a ^ b = ";  print_bits(a ^ b);	cout << '\n';	// �_����
	cout << "~a    = ";  print_bits(~a);	cout << '\n';	// �P�̕␔
	cout << "~b    = ";  print_bits(~b);	cout << '\n';	// �P�̕␔
}
