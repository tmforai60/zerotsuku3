// �A�h���X���Z�q�ƊԐڎQ�Ɖ��Z�q

#include <iostream>

using namespace std;

int main()
{
	int x = 123, y = 567, sw;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	cout << "�l��ύX����ϐ�[0�cx / 1�cy]�F";
	cin >> sw;

	int* ptr;
	if (sw == 0)
		ptr = &x;	// ptr��x���w��
	else
		ptr = &y;	// ptr��y���w��

	*ptr = 999;		// ptr�̎w����ɑ��

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
}
