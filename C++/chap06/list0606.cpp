// �ׂ�������߂�

#include <iostream>

using namespace std;

//--- x��n���Ԃ� ---//
double power(double x, int n)
{
	double tmp = 1.0;

	for (int i = 1; i <= n; i++)
		tmp *= x;	// tmp��x���|����
	return tmp;
}

int main()
{
	double a;
	int    b;

	cout << "a��b������߂܂��B\n";
	cout << "����a�F";	cin >> a;
	cout << "����b�F";	cin >> b;
	cout << a << "��" << b << "���" << power(a, b) << "�ł��B\n";
}
