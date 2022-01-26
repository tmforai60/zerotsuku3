// ����q�ɂ�鏑���w��

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	cout << oct << 1234 << '\n';	// 8�i��
	cout << dec << 1234 << '\n';	// 10�i��
	cout << hex << 1234 << '\n';	// 16�i��

	cout << showbase;
	cout << oct << 1234 << '\n';	// 8�i��
	cout << dec << 1234 << '\n';	// 10�i��
	cout << hex << 1234 << '\n';	// 16�i��

	cout << setw(10) << internal << "abc\n";
	cout << setw(10) << left	 << "abc\n";
	cout << setw(10) << right	 << "abc\n";

	cout << setbase(10);
	cout << setw(10) << internal << -123 << '\n';
	cout << setw(10) << left	 << -123 << '\n';
	cout << setw(10) << right	 << -123 << '\n';

	cout << setfill('*');			// �l�ߕ�������'*'�ɂ���
	cout << setw(10) << internal << -123 << '\n';
	cout << setw(10) << left	 << -123 << '\n';
	cout << setw(10) << right	 << -123 << '\n';
	cout << setfill(' ');			// �l�ߕ�������' '�ɖ߂�

	cout << fixed      << setw(10) << setprecision(2) << 123.5 << endl;
	cout << scientific << setw(10) << setprecision(2) << 123.5 << endl;
}
