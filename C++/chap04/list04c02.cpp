// �P�Ȃ镶���^�̕����t���^���������𔻒�

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "���̏����n�̒P�Ȃ镶���^��"
		 << (numeric_limits<char>::is_signed ? "�����t��" : "��������")
		 << "�����^�ł��B\n";
}
