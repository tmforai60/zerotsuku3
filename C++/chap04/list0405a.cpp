// �����ƕ����R�[�h��\��
// �ʉ��F���

#include <cctype>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
	cout << "���̏����n�̕����ƕ����R�[�h\n";

	for (char i = 0; i <= CHAR_MAX; i++) {
		switch (i) {
		 case '\a' : cout << "\\a";  break;
		 case '\b' : cout << "\\b";  break;
		 case '\f' : cout << "\\f";  break;
		 case '\n' : cout << "\\n";  break;
		 case '\r' : cout << "\\r";  break;
		 case '\t' : cout << "\\t";  break;
		 case '\v' : cout << "\\v";  break;
		 default   : cout << ' ' << (isprint(i) ? i : ' ');
		}

		// �����^�ɃL���X�g�������̂�16�i���ŕ\��
		cout << ' ' << hex << int(i) << '\n';
	}
}
