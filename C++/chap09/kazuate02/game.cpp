// �����ăQ�[���i��Q�ŁF�Q�[�����j

#include <ctime>
#include <cstdlib>
#include "kazuate.h"

using namespace std;

static int kotae = 0;

//--- ������ ---//
void initialize()
{
	srand(time(NULL));
}

//--- ���i���Ă�ׂ����j�̍쐬 ---//
void gen_no()
{
	kotae = rand() % (max_no + 1);
}

//--- �𓚂̔��� ---//
int judge(int cand)
{
	if (cand == kotae)		// ����
		return 0;
	else if (cand > kotae)	// �傫��
		return 1;
	else					// ������
		return 2;
}
