#include <iostream>
#include "IntStack.h"

using namespace std;

int main()
{
	IntStack s1(5);		// �e��5�̃X�^�b�N
	s1.push(15);		// s1 = {15}
	s1.push(31);		// s1 = {15, 31}

	IntStack s2(1);		// �e��1�̃X�^�b�N
	s2 = s1;			// s2��s1���R�s�[�����is2�̗e�ʂ�5�ɕύX�����j
	s2.push(88);		// s2 = {15, 31, 88}

	IntStack s3 = s2;	// s3��s2�̃R�s�[
	s3.push(99);		// s3 = {15, 31, 88, 99}

	cout << "�X�^�b�Ns3�ɐς܂�Ă���f�[�^�����ׂă|�b�v���܂��B\n";
	while (!s3.empty())					// ��łȂ�������
		cout << s3.pop() << '\n';		// �|�b�v���ĕ\��
}
