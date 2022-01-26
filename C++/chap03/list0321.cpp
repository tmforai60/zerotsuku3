// –ÊÏ‚ªn‚Åc‰¡‚ª®”‚Ì’·•ûŒ`‚Ì•Ó‚Ì’·‚³‚ğ—ñ‹“

#include <iostream>

using namespace std;

int main()
{
	int n;			// –ÊÏ
	cout << "–ÊÏ‚Í";
	cin >> n;

	for (int i = 1; i < n; i++) {
		if (i * i > n) break;
		if (n % i != 0) continue;
		cout << i << "~" << n / i << '\n';
	}
}
