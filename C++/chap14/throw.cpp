// ��O�̑��o�ƕߑ�

#include <new>
#include <iostream>

using namespace std;

//=== �I�[�o�t���[�N���X ===//
class OverFlow { };

//--- x�̂Q�{��Ԃ� ---//
int f(int x)
{
	if (x < 0)
		throw "���������B�l�����ɂȂ��Ă��܂��B\n";
	else if (x > 30000)
		throw OverFlow();
	else
		return 2 * x;
}

int main()
{
	int a;
	cout << "�����F";
	cin >> a;

	try {
		int b = f(a);
		cout << "���̐��̂Q�{��" << b << "�ł��B\n";
	}
	catch (const char* str) {		// ������̗�O��ߑ�
		cout << "��O�����F" << str;
	}
	catch (OverFlow) {				// OverFlow�^�̗�O�͂����ŕߑ�
		cout << "�I�[�o�t���[���܂����B�v���O�������I�����܂��B\n";
		return 1;
	}
}
