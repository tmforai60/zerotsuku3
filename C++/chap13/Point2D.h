#ifndef ___Point2D
#define ___Point2D

#include <iostream>

//--- ���ʔԍ��t���Q�������W�N���X ---//
class Point2D {
	int xp, yp;					// �w���W�Ƃx���W
	int id_no;					// ���ʔԍ�
	static int counter;			// ���Ԃ܂ł̎��ʔԍ���^�������y�錾�z

public:
	Point2D(int x = 0, int y = 0);		// �R���X�g���N�^�y�錾�z

	int id() const { return id_no; }	// ���ʔԍ�

	void print() const {				// ���W�̕\��
		std::cout << "(" << xp << "," << yp << ")";
	}

	static int get_max_id();			// ���ʔԍ��̍ő�l��ԋp�y�錾�z
};

#endif
