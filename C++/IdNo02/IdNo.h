// ���ʔԍ��N���XIdNo�i��Q�ŁF�w�b�_���j

#ifndef ___Class_IdNo
#define ___Class_IdNo

//===== ���ʔԍ��N���X =====//
class IdNo {
	static int counter;			// ���Ԃ܂ł̎��ʔԍ���^�����̂�
	int id_no;					// ���ʔԍ�

public:
	IdNo();						// �R���X�g���N�^

	int id() const;				// ���ʔԍ��𒲂ׂ�
	static int get_max_id();	// ���ʔԍ��̍ő�l�𒲂ׂ�
};

#endif
