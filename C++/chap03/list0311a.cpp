// �ǂݍ��񂾌�����*��\���ifor���j

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "����*��\�����܂����F";
	cin >> n;

	if (n > 0) {
		for (int i = 1; i <= n; i++)
			cout << '*';
		cout << '\n';
	}
}
