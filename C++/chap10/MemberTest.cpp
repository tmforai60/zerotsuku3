//--- ����N���X�̗��p�� ---//

#include <iostream>
#include "Member.h"

using namespace std;

void print(Member* p)
{
	p->print();			// �����o�֐�print�̌ďo��
}

int main()
{
	Member kaneko("���q�^��", 15, 4);			// �R���X�g���N�^�̌ďo��
	kaneko.set_rank(kaneko.get_rank() + 1);		// �����N���P�����A�b�v����
	print(&kaneko);								// �\��
}
