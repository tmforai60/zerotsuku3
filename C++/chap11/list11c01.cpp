// ���t�N���XDate�i�����o�֐��ďo���񐔃J�E���^�t���j

#include <iostream>

using namespace std;

class Date {
	int y;		// ����N
	int m;		// ��
	int d;		// ��
	mutable int counter;	// �����o�֐����Ăяo���ꂽ����

public:
	Date(int yy, int mm, int dd) {					// �R���X�g���N�^
		y = yy;  m = mm;  d = dd;  counter = 0;
	}
	int year()  const { counter++; return y; }		// �N��ԋp
	int month() const { counter++; return m; }		// ����ԋp
	int day()   const { counter++; return d; }		// ����ԋp
	int count() const { return counter; }			// �J�E���^��ԋp
};

int main()
{
	const Date birthday(1963, 11, 18);		// �a����

	cout << "birthday = " << birthday.year()  << "�N"
						  << birthday.month() << "��"
						  << birthday.day()	  << "��\n";
	cout << "birthday�̃����o�֐���" << birthday.count() << 
			"��Ăяo���܂����B\n";
}
