#ifndef ___Point2D
#define ___Point2D

#include <iostream>

//--- ¯•Ê”Ô†•t‚«‚QŸŒ³À•WƒNƒ‰ƒX ---//
class Point2D {
	int xp, yp;					// ‚wÀ•W‚Æ‚xÀ•W
	int id_no;					// ¯•Ê”Ô†
	static int counter;			// ‰½”Ô‚Ü‚Å‚Ì¯•Ê”Ô†‚ğ—^‚¦‚½‚©yéŒ¾z

public:
	Point2D(int x = 0, int y = 0);		// ƒRƒ“ƒXƒgƒ‰ƒNƒ^yéŒ¾z

	int id() const { return id_no; }	// ¯•Ê”Ô†

	void print() const {				// À•W‚Ì•\¦
		std::cout << "(" << xp << "," << yp << ")";
	}

	static int get_max_id();			// ¯•Ê”Ô†‚ÌÅ‘å’l‚ğ•Ô‹pyéŒ¾z
};

#endif
