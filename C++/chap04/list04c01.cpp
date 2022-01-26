// ®”Œ^‚Å•\Œ»‚Å‚«‚é’l‚ğ•\¦

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "‚±‚Ìˆ—Œn‚Ì®”Œ^‚Å•\Œ»‚Å‚«‚é’l\n";

	cout << "char         F"
						  << int(numeric_limits<char>::min()) << "`" 
						  << int(numeric_limits<char>::max()) << '\n';
	cout << "signed char  F"
						  << int(numeric_limits<signed char>::min()) << "`" 
						  << int(numeric_limits<signed char>::max()) << '\n';
	cout << "unsigned charF"
						  << int(numeric_limits<unsigned char>::min()) << "`" 
						  << int(numeric_limits<unsigned char>::max()) << '\n';

	cout << "short intF" << numeric_limits<short>::min() << "`" 
						  << numeric_limits<short>::max() << '\n';
	cout << "int      F" << numeric_limits<int>::min()   << "`" 
						  << numeric_limits<int>::max()   << '\n';
	cout << "long int F" << numeric_limits<long>::min()  << "`" 
						  << numeric_limits<long>::max()  << '\n';

	cout << "unsigned short intF"
						  << numeric_limits<unsigned short>::min() << "`" 
						  << numeric_limits<unsigned short>::max() << '\n';
	cout << "unsigned int      F"
						  << numeric_limits<unsigned>::min() << "`" 
						  << numeric_limits<unsigned>::max() << '\n';
	cout << "unsigned long int F"
						  << numeric_limits<unsigned long>::min() << "`" 
						  << numeric_limits<unsigned long>::max() << '\n';
}
