// �����z��N���XIntArray�i��Q�Łj

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== �����z��N���X ======//
class IntArray {
	int nelem;		// �z��̗v�f��
	int* vec;		// �擪�v�f�ւ̃|�C���^

public:
	//--- �����I�R���X�g���N�^ ---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	//--- �f�X�g���N�^ ---//
	~IntArray() { delete[] vec; }

	//--- �v�f����Ԃ� ---//
	int size() const { return nelem; }

	//--- �Y�����Z�q[] ---//
	int& operator[](int i) { return vec[i]; }
};

#endif
