// �������������l�����E�ɃV�t�g�����l��\��

#include <iostream>

using namespace std;

//--- ����x���́g�P�h�ł���r�b�g�������߂� ---//
int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

//--- int�^�^unsigned�^�̃r�b�g�������߂� ---//
int int_bits()
{
	return count_bits(~0U);
}

//--- unsigned�^�̃r�b�g�\����\�� ---//
void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >= 0; i--)
		cout << ((x >> i) & 1U ? '1' : '0');
}

int main()
{
	unsigned x, n;

	cout << "�񕉂̐����F";			cin >> x;
	cout << "�V�t�g����r�b�g���F";	cin >> n;

	cout << "�����@   = ";  print_bits(x);		 cout << '\n';
	cout << "���V�t�g = ";  print_bits(x << n);	 cout << '\n';
	cout << "�E�V�t�g = ";  print_bits(x >> n);	 cout << '\n';
}
