// “ñ‚Â‚Ì®”’l‚Ì˜a‚ÆÏ‚ğŠÖ”‚É‚æ‚Á‚Ä‹‚ß‚é

#include <iostream>

using namespace std;

//--- x‚Æy‚Ì˜a‚ÆÏ‚ğ*sum‚Æ*mul‚É‹‚ß‚é ---//
void sum_mul(int x, int y, int* sum, int* mul)
{
	*sum = x + y;		// x‚Æy‚Ì˜a‚ğ*sum‚É‘ã“ü
	*mul = x * y;		// x‚Æy‚ÌÏ‚ğ*mul‚É‘ã“ü
}

int main()
{
	int a, b;
	int wa = 0, seki = 0;

	cout << "®”aF";   cin >> a;
	cout << "®”bF";   cin >> b;

	sum_mul(a, b, &wa, &seki);		// a‚Æb‚Ì˜a‚ÆÏ‚ğ‹‚ß‚é

	cout << "˜a‚Í" << wa   << "‚Å‚·B\n";
	cout << "Ï‚Í" << seki << "‚Å‚·B\n";
}
