// �󂯎���������񒆂̏�������啶���ɕϊ����ĕ\��

#include <cctype>
#include <iostream>

using namespace std;

//--- ������s��\���i�������͑啶���ɕϊ��j---//
void put_upper(const char s[])
{
	for (int i = 0; s[i]; i++)
		cout << static_cast<char>(toupper(s[i]));
}

int main()
{
	char str[36];

	cout << "������F";
	cin >> str;

	put_upper(str);
	cout << '\n';
}
