// �x��𔭂���֐��i�f�t�H���g�������j

#include <iostream>

using namespace std;

//--- n��̌x��𔭂��� ---//
void alerts(int n = 3)
{
	while (n-- > 0)
		cout << '\a';
}

int main()
{
	alerts();
	cout << "�x��I\n";

	alerts(5);
	cout << "�Ăьx��I\n";
}
