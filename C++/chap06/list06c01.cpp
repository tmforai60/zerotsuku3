// �ċA�ďo����p���ĊK������߂�

#include <iostream>

using namespace std;

//--- n�̊K����ċA�I�ɋ��߂� ---//
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main()
{
	int x;

	cout << "�����l�F";
	cin >> x;

	cout << x << "�̊K���" << factorial(x) << "�ł��B\n";
}
