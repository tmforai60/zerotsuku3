// ���͂��ꂽ���̋G�߂�\���i�D���Ȃ����J��Ԃ���j

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry;		// ������x�H

	do {
		int month;
		cout << "�G�߂����߂܂��B\n�����ł����F";
		cin >> month;

		if (month >= 3 && month <= 5)		// 3���E 4���E 5��
			cout << "����͏t�ł��B\n";
		else if (month >= 6 && month <= 8)	// 6���E 7���E 8��
			cout << "����͉Ăł��B\n";
		else if (month >= 9 && month <= 11)	// 9���E10���E11��
			cout << "����͏H�ł��B\n";
		else if (month == 12 || month == 1 || month == 2) // 12���E1���E2��
			cout << "����͓~�ł��B\n";
		else
			cout << "\a����Ȍ��͂���܂����B\n";

		cout << "������x�H Y�cYes�^N�cNo�F";
		cin >> retry;
	} while (retry == "Y" || retry == "y");
}
