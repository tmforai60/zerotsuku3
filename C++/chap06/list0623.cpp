// �Q�Ƃ�ԋp����֐�

#include <iostream>

using namespace std;

//--- x�ւ̎Q�Ƃ�ԋp ---//
int& ref()
{
	static int x;	// �ÓI�L�������
	return x;
}

int main()
{
	ref() = 5;									// ref()�ɒl����
	cout << "ref() = " << ref() << '\n';		// ref()�̒l��\��
}
