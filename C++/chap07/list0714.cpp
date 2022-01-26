// üŒ`’Tõi‘æ‚P”Åj

#include <iostream>

using namespace std;

//--- ”z—ña‚Ìæ“ªnŒÂ‚Ì—v‘f‚©‚ç’lkey‚ğüŒ`’Tõi‘æ‚P”Åj---//
int seq_search(int* a, int n, int key)
{
	for (int i = 0; i < n; i++)
		if (*a++ == key)		// ’Tõ¬Œ÷
			return i;
	return -1;					// ’Tõ¸”s
}

int main()
{
	int key, idx;
	int x[7];
	int x_size = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < x_size; i++) {
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}
	cout << "’T‚·’l‚ÍF";
	cin >> key;

	if ((idx = seq_search(x, x_size, key)) != -1)
		cout << "‚»‚Ì’l‚ğ‚à‚Â—v‘f‚Íx[" << idx << "]‚Å‚·B\n";
	else
		cout << "Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B\n";
}
