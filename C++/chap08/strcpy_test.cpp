// strcpy�֐���strncpy�֐��̗��p��

#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
	char tmp[16];
	char s1[16], s2[16], s3[16];

	cout << "���������͂��Ă��������F";
	cin >> tmp;

	strcpy(s1, strcpy(s2, tmp));	// s2�ɃR�s�[�����������s1�ɂ��R�s�[

	cout << "������s1��\"" << s1 << "\"�ł��B\n";
	cout << "������s2��\"" << s2 << "\"�ł��B\n";
	cout << "������s3��\"" << strcpy(s3, tmp) << "\"�ł��B\n";

	char* x = "XXXXXXXXX";			// 9��'X'�ƃi������ */

	strcpy(s3, x); strncpy(s3, "12345", 3);		 cout << "s3 = " << s3 << '\n';
	strcpy(s3, x); strncpy(s3, "12345", 5);		 cout << "s3 = " << s3 << '\n';
	strcpy(s3, x); strncpy(s3, "12345", 7);		 cout << "s3 = " << s3 << '\n';
	strcpy(s3, x); strncpy(s3, "1234567890", 9); cout << "s3 = " << s3 << '\n';
}
