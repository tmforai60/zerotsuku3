//--- ����N���X�i�w�b�_���j---//

#include <string>

class Member {
	std::string full_name;	// ����
	int			no;			// ����ԍ�
	int			rank;		// ��������N

public:
	// �R���X�g���N�^�y�錾�z
	Member(std::string name, int number, int grade);

	// �����N�擾�i�Q�b�^�j
	int get_rank() { return rank; }

	// �����N�ݒ�i�Z�b�^�j
	void set_rank(int grade) { rank = grade; }

	// �\���y�錾�z
	void print();
};
