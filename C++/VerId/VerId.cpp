// ���ؗp�E���ʔԍ��N���XVerId�i�\�[�X���j

#include "VerId.h"

int VerId::counter = 0;		// ���Ԃ܂ł̎��ʔԍ���^�����̂�

//--- �R���X�g���N�^ ---//
VerId::VerId()
{
	id_no = ++counter;		// ���ʔԍ���^����
}

//--- ���ʔԍ��𒲂ׂ� ---//
int VerId::id() const
{
	return id_no;			// ���ʔԍ���ԋp
}
