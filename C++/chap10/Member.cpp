//--- ����N���X�i�\�[�X���j---//

#include <iostream>
#include "Member.h"

using namespace std;

// �R���X�g���N�^�y��`�z
Member::Member(string name, int number, int grade)
{
	full_name = name;  no = number;  rank = grade;
}

// �\���y��`�z
void Member::print()
{
	cout << "No." << no << "�F" << full_name << "�m�����N�F" << rank << "�n\n";
}
