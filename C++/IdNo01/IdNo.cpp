// ���ʔԍ��N���XIdNo�i��P�ŁF�\�[�X���j

#include "IdNo.h"

int IdNo::counter = 0;		// ���Ԃ܂ł̎��ʔԍ���^�����̂�

//--- �R���X�g���N�^ ---//
IdNo::IdNo()
{
	id_no = ++counter;		// ���ʔԍ���^����
}

//--- ���ʔԍ��𒲂ׂ� ---//
int IdNo::id() const
{
	return id_no;			// ���ʔԍ���ԋp
}
