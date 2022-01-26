// �����z��N���X�i��R�ŁF�\�[�X���j

#include <cstddef>
#include "IntArray.h"

//--- �R�s�[�R���X�g���N�^ ---//
IntArray::IntArray(const IntArray& x)
{
	if (&x == this) { 						// �������q���������g�ł���΁c
		nelem = 0;
		vec = NULL;
	} else {
		nelem = x.nelem;					// �v�f����x�Ɠ����ɂ���
		vec = new int[nelem];				// �z��{�̂��m��
		for (int i = 0; i < nelem; i++)		// �S�v�f���R�s�[
			vec[i] = x.vec[i];
	}
}

//--- ������Z�q ---//
IntArray& IntArray::operator=(const IntArray& x)
{
	if (&x != this) {						// ��������������g�łȂ���΁c
		if (nelem != x.nelem) {				// ����O��̗v�f�����قȂ�΁c
			delete[] vec;					// ���Ƃ��Ɗm�ۂ��Ă����̈�����
			nelem = x.nelem;				// �V�����v�f��
			vec = new int[nelem];			// �V���ɗ̈���m��
		}
		for (int i = 0; i < nelem; i++)		// �S�v�f���R�s�[
			vec[i] = x.vec[i];
	}
	return *this;
}
