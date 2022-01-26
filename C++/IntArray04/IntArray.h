// �����z��N���XIntArray�i��S�ŁF�w�b�_���j

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== �����z��N���X ======//
class IntArray {
	int nelem;		// �z��̗v�f��
	int* vec;		// �擪�v�f�ւ̃|�C���^

public:
	//----- �Y���͈̓G���[ -----//
	class IdxRngErr {
	private:
		const IntArray* ident;
		int idx;
	public:
		IdxRngErr(const IntArray* p, int i) : ident(p), idx(i) { }
		int index() const { return idx; }
	};

	//--- �����I�R���X�g���N�^ ---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	//--- �R�s�[�R���X�g���N�^ ---//
	IntArray(const IntArray& x);

	//--- �f�X�g���N�^ ---//
	~IntArray() { delete[] vec; }

	//--- �v�f����Ԃ� ---//
	int size() const { return nelem; }

	//--- ������Z�q= ---//
	IntArray& operator=(const IntArray& x);

	//--- �Y�����Z�q[] ---//
	int& operator[](int i) {
		if (i < 0 || i >= nelem)
			throw IdxRngErr(this, i);				// �Y���͈̓G���[���o
		return vec[i];
	}

	//--- const�œY�����Z�q[] ---//
	const int& operator[](int i) const {
		if (i < 0 || i >= nelem)
			throw IdxRngErr(this, i);				// �Y���͈̓G���[���o
		return vec[i];
	}
};

#endif
