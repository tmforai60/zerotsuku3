// �ǂݍ��񂾐��������Z�i���v��1,000�𒴂��Ȃ��͈͂ŉ��Z����j

#include <iostream>

using namespace std;

int main()
{
	int n;			// ���Z�����
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂����F";
	cin >> n;

	int sum = 0;	// ���v�l
	for (int i = 0; i < n; i++) {
		int t;
		cout << "�����F";
		cin >> t;
		if (sum + t > 1000) {
			cout << "\a���v��1,000�𒴂��܂����B\n�Ō�̐��l�͖������܂��B\n";
			break;
		}
		sum += t;
	}
	cout << "���v��" << sum << "�ł��B\n";
}
