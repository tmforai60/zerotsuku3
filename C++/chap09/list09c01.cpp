// ��l�̍ő�l�����߂�֐��e���v���[�g�Ɗ֐��̌ĕ���

#include <iostream>

using namespace std;

//--- �ʏ�̊֐��i���ӁF���쌟�؂̂��߂ɏ������ق��̒l��ԋp�j---//
int maxof(int a, int b) { return a < b ? a : b; }

//--- �֐��e���v���[�g ---//
template <class Type> Type maxof(Type a, Type b) { return a > b ? a : b; }

int main()
{
	int a, b;

	cout << "����a�F";	  cin >> a;
	cout << "����b�F";	  cin >> b;

	cout << "�傫���̂�" << maxof(a, b)      << "�ł��B\n";
	cout << "�傫���̂�" << maxof<int>(a, b) << "�ł��B\n";
	cout << "�傫���̂�" << maxof<>(a, b)    << "�ł��B\n";
}
