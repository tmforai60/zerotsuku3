// �����L������ԂƐÓI�L�������

#include <iostream>

using namespace std;

int fx = 0;				// �ÓI�L������ԁ{�t�@�C���L���͈�

void func()
{
	static int sx = 0;	// �ÓI�L������ԁ{�u���b�N�L���͈�
	int 	   ax = 0;	// �����L������ԁ{�u���b�N�L���͈�

	fx++; sx++; ax++; 
	cout << fx << "  " << sx << "  " << ax << '\n';
}

int main()
{
	cout << "fx sx ax\n";
	cout << "--------\n";
	for (int i = 0; i < 8; i++)
		func();
}
