// ���t�N���XDate�i��P�Łj�Ƒ��

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date a(2025, 11, 18);
	Date b(1999, 12, 31);
	Date c(1999, 12, 31);

	b = a;						// ���

	c = Date(2023, 12, 27);		// ���

	cout << "a = " << a.year() << "�N" << a.month() << "��" << a.day() << "��\n";
	cout << "b = " << b.year() << "�N" << b.month() << "��" << b.day() << "��\n";
	cout << "c = " << c.year() << "�N" << c.month() << "��" << c.day() << "��\n";
}
