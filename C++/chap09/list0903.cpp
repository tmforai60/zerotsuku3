// ��l�̍ő�l�����߂�֐��e���v���[�g�Ɩ����I�ȋ��

#include <iostream>

using namespace std;

//--- a, b�̑傫���ق��̒l�����߂� ---//
template <class Type> Type maxof(Type a, Type b)
{
	return a > b ? a : b;
}

int main()
{
	int a, b;
	double x;

	cout << "����a�F";	  cin >> a;
	cout << "����b�F";	  cin >> b;
	cout << "����x�F";	  cin >> x;

	cout << "a��b�ő傫���̂�" << maxof(a, b)         << "�ł��B\n";
	cout << "a��x�ő傫���̂�" << maxof<double>(a, x) << "�ł��B\n";
}
