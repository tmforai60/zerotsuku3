#include <iostream>
#include "Point2D.h"
#include "Circle.h"

using namespace std;

int main()
{
	Point2D origin(0, 0);			// Œ´“_
	Circle c1(Point2D(3, 5), 7);	// ’†SÀ•W(3, 5) ”¼Œa7‚Ì‰~
	Circle c2(Point2D(), 8);		// ’†SÀ•W(0, 0) ”¼Œa8‚Ì‰~
	Circle c3(origin, 9);			// ’†SÀ•W(0, 0) ”¼Œa9‚Ì‰~

	cout << "c1 = ";   c1.print();   cout << '\n';
	cout << "c2 = ";   c2.print();   cout << '\n';
	cout << "c3 = ";   c3.print();   cout << '\n';
}
