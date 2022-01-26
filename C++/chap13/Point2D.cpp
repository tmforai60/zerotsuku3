#include "Point2D.h"

int Point2D::counter = 0;		// ‰½”Ô‚Ü‚Å‚Ì¯•Ê”Ô†‚ğ—^‚¦‚½‚©y’è‹`z

//--- ƒRƒ“ƒXƒgƒ‰ƒNƒ^y’è‹`z---//
Point2D::Point2D(int x, int y) : xp(x), yp(y) {
	id_no = ++counter;		// ¯•Ê”Ô†‚ğ—^‚¦‚é
}

//--- ¯•Ê”Ô†‚ÌÅ‘å’l‚ğ’²‚×‚éy’è‹`z---//
int Point2D::get_max_id() {
	return counter;			// ¯•Ê”Ô†‚ÌÅ‘å’l‚ğ•Ô‹p
}
