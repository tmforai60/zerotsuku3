// ®”Œ^‚Å•\Œ»‚Å‚«‚é’l‚ğ•\¦

#include <climits>
#include <iostream>

using namespace std;

int main()
{
	cout << "‚±‚Ìˆ—Œn‚Ì®”Œ^‚Å•\Œ»‚Å‚«‚é’l\n";

	cout << "char         F" << CHAR_MIN  << "`" << CHAR_MAX  << '\n';
	cout << "signed char  F" << SCHAR_MIN << "`" << SCHAR_MAX << '\n';
	cout << "unsigned charF" << 0         << "`" << UCHAR_MAX << '\n';

	cout << "short intF" << SHRT_MIN << "`" << SHRT_MAX << '\n';
	cout << "int      F" << INT_MIN  << "`" << INT_MAX  << '\n';
	cout << "long int F" << LONG_MIN << "`" << LONG_MAX << '\n';

	cout << "unsigned short intF" << 0 << "`" << USHRT_MAX << '\n';
	cout << "unsigned int      F" << 0 << "`" << UINT_MAX  << '\n';
	cout << "unsigned long int F" << 0 << "`" << ULONG_MAX << '\n';
}
