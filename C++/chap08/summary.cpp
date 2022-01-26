#include <iostream>

using namespace std;

//--- ������s��""�ň͂�ŕ\�� ---//
void put_str(const char* s)
{
	cout << '\"';
	while (*s)
		cout << *s++;
	cout << '\"';
}

int main()
{
	char a[] = "CIA";	// �z��ɂ�镶����
	char* p  = "FBI";	// �|�C���^�ɂ�镶����
	char a2[][5] = {"LISP", "C", "Ada"};	// �z��ɂ�镶����̔z��
	char* p2[]   = {"PAUL", "X", "MAC"};	// �|�C���^�ɂ�镶����̔z��

	cout << "a = ";  put_str(a);  cout << '\n';
	cout << "p = ";  put_str(p);  cout << '\n';

	for (int i = 0; i < sizeof(a2) / sizeof(a2[0]); i++) {
		cout << "a2[" << i << "] = ";   put_str(a2[i]);   cout << '\n';
	}

	for (int i = 0; i < sizeof(p2) / sizeof(p2[0]); i++) {
		cout << "p2[" << i << "] = ";   put_str(p2[i]);   cout << '\n';
	}
}
