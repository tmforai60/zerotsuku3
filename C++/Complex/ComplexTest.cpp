// ���f���N���XComplex�̗��p��

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	double re, im;

	cout << "a�̎����F";  cin >> re;
	cout << "a�̋����F";  cin >> im;
	Complex a(re, im);

	cout << "b�̎����F";  cin >> re;
	cout << "b�̋����F";  cin >> im;
	Complex b(re, im);

	Complex c = -a + b;

	b += 2.0;						// b��(2.0, 0.0)��������
	c -= Complex(1.0, 1.0);			// c����(1.0, 1.0)��������
	Complex d(b.imag(), c.real());	// d��(b�̋���, c�̎���)�Ƃ���

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "c = " << c << '\n';
	cout << "d = " << d << '\n';
}
