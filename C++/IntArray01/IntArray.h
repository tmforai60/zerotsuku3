// �����z��N���XIntArray�i��P�Łj

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== �����z��N���X ======//
class IntArray {
	int nelem;		// �z��̗v�f��
	int* vec;		// �擪�v�f�ւ̃|�C���^

public:
	//--- �R���X�g���N�^ ---//
	IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	//--- �v�f����Ԃ� ---//
	int size() const { return nelem; }

	//--- �Y�����Z�q[] ---//
	int& operator[](int i) { return vec[i]; }
};

#endif
