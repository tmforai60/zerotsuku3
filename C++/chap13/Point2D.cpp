#include "Point2D.h"

int Point2D::counter = 0;		// ���Ԃ܂ł̎��ʔԍ���^�������y��`�z

//--- �R���X�g���N�^�y��`�z---//
Point2D::Point2D(int x, int y) : xp(x), yp(y) {
	id_no = ++counter;		// ���ʔԍ���^����
}

//--- ���ʔԍ��̍ő�l�𒲂ׂ�y��`�z---//
int Point2D::get_max_id() {
	return counter;			// ���ʔԍ��̍ő�l��ԋp
}
