// typeid‰‰Zq‚É‚æ‚éŒ^î•ñ‚Ì•\¦

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int n;
	int* p;

	cout << "n  : " << typeid(n).name()  << '\n';
	cout << "&n : " << typeid(&n).name() << '\n';
	cout << "p  : " << typeid(p).name()  << '\n';
	cout << "*p : " << typeid(*p).name() << '\n';
}
