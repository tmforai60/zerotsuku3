#include <iostream>
#include "maxof.h"

using namespace std;

int main()
{
	int a, b;
	char s[64], t[64];

	cout << "����a�F";	  cin >> a;
	cout << "����b�F";	  cin >> b;
	cout << "������s�F";  cin >> s;
	cout << "������t�F";  cin >> t;

	cout << "a��b�ő傫���̂�" <<       maxof(a, b)                  << "�ł��B\n";
	cout << "s��t�ő傫���̂�" <<       maxof<const char*>(s, t)     << "�ł��B\n";
	cout << "s��\"ABC\"�ő傫���̂�" << maxof<const char*>(s, "ABC") << "�ł��B\n";
}
