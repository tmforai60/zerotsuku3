// �ǂݍ��񂾌��̋G�߂�\��

#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "�G�߂����߂܂��B\n�����ł����F";
	cin >> month;

	if (month < 1 || month > 12)
		cout << "\a����Ȍ��͂���܂����B\n";
	else if (month <= 5)						//  3���E 4���E 5��
		cout << "����͏t�ł��B\n";
	else if (month <= 8)						//  6���E 7���E 8��
		cout << "����͉Ăł��B\n";
	else if (month <= 11)						//  9���E10���E11��
		cout << "����͏H�ł��B\n";
	else										// 12���E 1���E 2��
		cout << "����͓~�ł��B\n";
}
