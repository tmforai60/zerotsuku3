#include <iostream>
#include "Point2D.h"
#include "Circle.h"

using namespace std;

int main()
{
	Point2D origin(0, 0);			// ���_
	Circle c1(Point2D(3, 5), 7);	// ���S���W(3, 5) ���a7�̉~
	Circle c2(Point2D(), 8);		// ���S���W(0, 0) ���a8�̉~
	Circle c3(origin, 9);			// ���S���W(0, 0) ���a9�̉~

	cout << "c1 = ";   c1.print();   cout << '\n';
	cout << "c2 = ";   c2.print();   cout << '\n';
	cout << "c3 = ";   c3.print();   cout << '\n';
}
