#ifndef ___Circle
#define ___Circle

#include "Point2D.h"

//--- �~�N���X ---//
class Circle {
	Point2D center;		// ���S���W
	int radius;			// ���a

public:
	Circle(const Point2D& c, int r) : center(c), radius(r) { }

	Point2D get_center() const { return center; }	// ���S���W

	int get_radius() const { return radius; }		// ���a

	void print() const {							// �\��
		std::cout << "���a[" << radius << "] ���S���W";  center.print();
	}
};

#endif
