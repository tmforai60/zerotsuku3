// �^���l�N���XBoolean�i��Q�ŁF�_���ے艉�Z�q!��ǉ��j

#ifndef ___Class_Boolean
#define ___Class_Boolean

#include <iostream>

//===== �^���l�N���X =====//
class Boolean {
public:
	enum boolean {False, True};			// False�͋U�^True�͐^

private:
	boolean v;			// �^���l

public:
	//--- �f�t�H���g�R���X�g���N�^---//
	Boolean() : v(False) { }				// �U�ŏ�����

	//--- �R���X�g���N�^ ---//
	Boolean(int val) : v(val == 0 ? False : True) { }

	//--- int�^�ւ̕ϊ��֐� ---//
	operator int() const { return v; }

	//--- const char*�^�ւ̕ϊ��֐� ---//
	operator const char*() const { return v == False ? "False" : "True"; }

	//--- �_���ے艉�Z�q! ---//
	bool operator!() const { return !v; }
};

//--- �o�̓X�g���[��s��x��}�� ---//
inline std::ostream& operator<<(std::ostream& s, Boolean& x)
{
	return s << static_cast<const char*>(x);
}

#endif
