// bool�^�̒l��\��

#include <iostream>

using namespace std;

int main()
{
	cout << true << ' ' << false << '\n';

	cout << boolalpha;					// �^���l���A���t�@�x�b�g�`���ŏo��
	cout << true << ' ' << false << '\n';

	cout << noboolalpha;				// �^���l�𐔒l�`���ŏo��
	cout << true << ' ' << false << '\n';
}
