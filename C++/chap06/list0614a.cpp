// �������������l�����E�ɃV�t�g�����l��\��
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
	unsigned x, n;

	cout << "�񕉂̐����F";			cin >> x;
	cout << "�V�t�g����r�b�g���F";	cin >> n;

	cout << "�����@   = ";  print_bits(x);		 cout << '\n';
	cout << "���V�t�g = ";  print_bits(x << n);	 cout << '\n';
	cout << "�E�V�t�g = ";  print_bits(x >> n);	 cout << '\n';
}
