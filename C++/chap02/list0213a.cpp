// ��̐����l�̏������ق��̒l�Ƒ傫���ق��̒l�����߂ĕ\���i�ʉ��F�R���}���Z�q�𗘗p�j

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a�F";   cin >> a;
	cout << "����b�F";   cin >> b;

	int min, max;		// �������ق��̒l�^�傫���ق��̒l

	if (a < b)
		min = a, max = b;
	else
		min = b, max = a;

	cout << "�������ق��̒l��" << min << "�ł��B\n";
	cout << "�傫���ق��̒l��" << max << "�ł��B\n";
}
