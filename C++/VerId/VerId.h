// ���ؗp�E���ʔԍ��N���XVerId�i�w�b�_���j

#ifndef ___Class_VerId
#define ___Class_VerId

//===== ���ʔԍ��N���X =====//
class VerId {
	int id_no;				// ���ʔԍ�

public:
	static int counter;		// ���Ԃ܂ł̎��ʔԍ���^�����̂�

	VerId();				// �R���X�g���N�^

	int id() const;			// ���ʔԍ��𒲂ׂ�
};

#endif
