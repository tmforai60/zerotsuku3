// ���ʔԍ��N���XIdNo�i��Q�ŁF�\�[�X���j

#include "IdNo.h"

int IdNo::counter = 0;

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

//--- ���ʔԍ��̍ő�l�𒲂ׂ� ---//
int IdNo::get_max_id()
{
	return counter;			// ���ʔԍ��̍ő�l��ԋp
}
