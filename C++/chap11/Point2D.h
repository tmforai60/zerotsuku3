#ifndef ___Point2D
#define ___Point2D

//--- ‚QŸŒ³À•WƒNƒ‰ƒX ---//
class Point2D {
	int xp, yp;		// ‚wÀ•W‚Æ‚xÀ•W

public:
	Point2D(int x = 0, int y = 0) : xp(x), yp(y) { }

	int x() const { return xp; }				// ‚wÀ•W
	int y() const { return yp; }				// ‚xÀ•W

	void print() const { std::cout << "(" << xp << "," << yp << ")"; } // •\¦
};

#endif
