// �󂯎�����������\��

#include <iostream>

using namespace std;

//--- ������s��\�� ---//
void put_str(const char s[])
{
	for (int i = 0; s[i]; i++)
		cout << s[i];
}

int main()
{
	char str[36];

	put_str("������F");
	cin >> str;

	put_str(str);
	cout << '\n';
}
