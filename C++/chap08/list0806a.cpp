// Žó‚¯Žæ‚Á‚½•¶Žš—ñ‚ð•\Ž¦

#include <iostream>

using namespace std;

//--- •¶Žš—ñs‚ð•\Ž¦ ---//
void put_str(const char s[])
{
	for (int i = 0; s[i]; i++)
		cout << s[i];
}

int main()
{
	char str[36];

	put_str("•¶Žš—ñF");
	cin >> str;

	put_str(str);
	cout << '\n';
}
