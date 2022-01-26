#ifndef ___IntStack
#define ___IntStack

#include <iostream>

//--- �����X�^�b�N�N���X ---//
class IntStack {
	int nelem;		// �X�^�b�N�̗e�ʁi�z��̗v�f���j
	int* stk;		// �擪�v�f�ւ̃|�C���^
	int ptr;		// �X�^�b�N�|�C���^�i���ݐς܂�Ă���f�[�^���j

public:
	//--- �����I�R���X�g���N�^ ---//
	explicit IntStack(int sz) : nelem(sz), ptr(0) { stk = new int[nelem]; }

	IntStack(const IntStack& x) {			  //--- �R�s�[�R���X�g���N�^ ---//
		nelem = x.nelem;						// �e�ʂ�x�Ɠ����ɂ���
		ptr = x.ptr;							// �X�^�b�N�|�C���^��������
		stk = new int[nelem];					// �z��{�̂��m��
		for (int i = 0; i < nelem; i++)			// �S�v�f���R�s�[
			stk[i] = x.stk[i];
	}

	~IntStack() { delete[] stk; }			  //--- �f�X�g���N�^ ---//

	int size() const { return nelem; }		  //--- �e�ʂ�Ԃ� ---//

	bool empty() const { return ptr == 0; }	  //--- �X�^�b�N�͋󂩁H ---//

	IntStack& operator=(const IntStack& x) {  //--- ������Z�q= ---//
		if (&x != this) {						// ��������������g�łȂ���΁c
			if (nelem != x.nelem) {				// ����O��̗v�f�����قȂ�΁c
				delete[] stk;					// ���Ƃ��Ɗm�ۂ��Ă����̈�����
				nelem = x.nelem;				// �V�����e��
				ptr = x.ptr;					// �V�����X�^�b�N�|�C���^
				stk = new int[nelem];			// �V���ɗ̈���m��
			}
			for (int i = 0; i < ptr; i++)		// �ς܂�Ă���v�f���R�s�[
				stk[i] = x.stk[i];
		}
		return *this;
	}

	//--- �v�b�V���F�����Ƀf�[�^��ς� ---//
	void push(int x) { if (ptr < nelem) stk[ptr++] = x; }

	//--- �|�b�v�F�����ɐς܂�Ă���f�[�^�����o�� ---//
	int pop() { if (ptr > 0) return stk[--ptr]; else throw 1; }
};

#endif
