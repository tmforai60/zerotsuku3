// strcat�֐���strncat�֐��̗��p��

#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
	char s[10];
	char* x = "ABC";

	strcpy(s, "QWE");	// s��"QWE"�ƂȂ�
	strcat(s, "RTY");	// s��"QWERTY"�ƂȂ�
	cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123", 1);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123", 3);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123", 5);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "12345", 5);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123456789", 5);	cout << "s = " << s << '\n';
}
