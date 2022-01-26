// ��l�̍ő�l�����߂�֐��e���v���[�g�Ɩ����I�ȓ��ꉻ

#include <cstring>
#include <iostream>

using namespace std;

//--- a, b�̑傫���ق��̒l�����߂� ---//
template <class Type> Type maxof(Type a, Type b)
{
	return a > b ? a : b;
}

//--- a, b�̑傫���ق��̒l�����߂�iconst char*�^�̓��ꉻ�j---//
template <> const char* maxof<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) > 0 ? a : b;
}

int main()
{
	int a, b;
	char s[64], t[64];

	cout << "����a�F";	  cin >> a;
	cout << "����b�F";	  cin >> b;
	cout << "������s�F";  cin >> s;
	cout << "������t�F";  cin >> t;

	cout << "a��b�ő傫���̂�" <<       maxof(a, b)                  << "�ł��B\n";
	cout << "s��t�ő傫���̂�" <<       maxof<const char*>(s, t)     << "�ł��B\n";
	cout << "s��\"ABC\"�ő傫���̂�" << maxof<const char*>(s, "ABC") << "�ł��B\n";
}
