// �ǂݍ��񂾐��������Z�i9999�����͂����Ƌ����I���j

#include <iostream>

using namespace std;

int main()
{
	int n;			// ���Z�����
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂����F";
	cin >> n;
	cout << "9999�ŋ����I�����܂��B\n";

	int sum = 0;	// ���v�l
	for (int i = 0; i < n; i++) {
		int t;
		cout << "�����F";
		cin >> t;
		if (t == 9999)
			goto Exit;
		sum += t;
	}
	cout << "���v��" << sum << "�ł��B\n";

Exit:
	;
}
