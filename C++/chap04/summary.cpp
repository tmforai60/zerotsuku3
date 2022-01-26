#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	cout << "15   / 2   = " << 15   / 2   << '\n';
	cout << "15.0 / 2.0 = " << 15.0 / 2.0 << '\n';
	cout << "15.0 / 2   = " << 15.0 / 2   << '\n';
	cout << "15   / 2.0 = " << 15   / 2.0 << '\n';

	int x, y;
	cout << "x�̒l�F";	cin >> x;
	cout << "y�̒l�F";	cin >> y;

	bool eq = (x == y);
	cout << "�����͓���"
		 << (eq ? "���ł��B\n" : "���Ȃ��ł��B\n");

	cout << "���ϒl��"
		 << static_cast<double>(x + y) / 2 << "�ł��B\n";

	cout << fixed << setprecision(6);
	for (int i = 0; i <= 1000; i++)
		cout << static_cast<float>(i) / 1000 << '\n'; 
}
