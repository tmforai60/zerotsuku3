// �������Ƒ���^�l�n���ƎQ�Ɠn���̌���
// ���ؖړI�ő�����Z�q�̈������s�l�n���t�ɂ���

#include <iostream>

using namespace std;

//===== ���ؗp�N���X =====//
class Test {
public:
	Test() {							// �f�t�H���g�R���X�g���N�^
		 cout << "�������FTest()\n";
	}

	Test(const Test& t) {				// �R�s�[�R���X�g���N�^
		cout << "�������FTest(const Test&)\n";
	}

	Test& operator=(Test t) {			// ������Z�q
		cout << "��@���FTest = Test\n";  return *this;
	}
};

//--- �l�n�� ---//
void value(Test a) { }

//--- �Q�Ɠn�� ---//
void reference(Test& a)  { }

int main()
{
	Test x;		  // �f�t�H���g�R���X�g���N�^
	Test y = x;	  // �R�s�[�R���X�g���N�^
	Test z(x);	  // �R�s�[�R���X�g���N�^
	y = x;		  // ������Z�q
	value(x);	  // �֐��ďo���i�l�n���j
	reference(x); // �֐��ďo���i�Q�Ɠn���j
}
