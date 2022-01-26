#ifndef ___TinyInt
#define ___TinyInt

#include <climits>
#include <iostream>

//--- �������N���X ---//
class TinyInt {
	int v;			// �l

public:
	TinyInt(int value = 0) : v(value) { }		//--- �R���X�g���N�^ ---//

	operator int() const { return v; }			//--- int�ւ̕ϊ��֐�  ---//

	bool operator!() const { return v == 0; }	//--- �_���ے艉�Z�q! ---//

	TinyInt& operator++() { 		//--- �O�u�������Z�q++ ---//
		if (v < INT_MAX) v++;			// �l�̏����INT_MAX
		return *this;					// �������g�ւ̎Q�Ƃ�ԋp
	}

	TinyInt operator++(int) {		//--- ��u�������Z�q++ ---//
		TinyInt x = *this;				// �C���N�������g�O�̒l��ۑ�
		++(*this);						// �O�u�������Z�q�ɂ���ăC���N�������g
		return x;						// �ۑ����Ă����l��ԋp
	}

	friend TinyInt operator+(const TinyInt& x, const TinyInt& y) {	// x + y
		return TinyInt(x.v + y.v);
	}

	//--- ����������Z�q += ---//
	TinyInt& operator+=(const TinyInt& x) { v += x.v; return *this; }

	friend bool operator==(const TinyInt& x, const TinyInt& y) { return x.v == y.v; }

	friend bool operator!=(const TinyInt& x, const TinyInt& y) { return x.v != y.v; }

	friend bool operator> (const TinyInt& x, const TinyInt& y) { return x.v >  y.v; }

	friend bool operator>=(const TinyInt& x, const TinyInt& y) { return x.v >= y.v; }

	friend bool operator< (const TinyInt& x, const TinyInt& y) { return x.v <  y.v; }

	friend bool operator<=(const TinyInt& x, const TinyInt& y) { return x.v <= y.v; }

	friend std::ostream& operator<<(std::ostream& s, const TinyInt& x) {
		return s << x.v;
	}
};

#endif
