// strlen�֐��̗��p��i���̂P�j

#include <cstring>
#include <iostream>

using namespace std;

//--- strlen�̎�����` ---//

#include <cstddef>

size_t strlen(const char* s)
{
	size_t len = 0;		// ����

	while (*s++)
		len++;
	return len;
}

int main(void)
{
	char str[100];

	cout << "���������͂��Ă��������F";
	cin >> str;

	cout << "������\"" << str << "\"�̒�����" << strlen(str) << "�ł��B\n";
}
