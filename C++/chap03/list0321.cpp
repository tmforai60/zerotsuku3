// �ʐς�n�ŏc���������̒����`�̕ӂ̒������

#include <iostream>

using namespace std;

int main()
{
	int n;			// �ʐ�
	cout << "�ʐς�";
	cin >> n;

	for (int i = 1; i < n; i++) {
		if (i * i > n) break;
		if (n % i != 0) continue;
		cout << i << "�~" << n / i << '\n';
	}
}
