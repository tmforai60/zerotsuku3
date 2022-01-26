// ���t�N���XDate�i��S�ŁF�w�b�_���j

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

//===== ���t�N���X =====//
class Date {
	int y;	// ����N
	int m;	// ��
	int d;	// ��
	static int dmax[];
	static int days_of_month(int y, int m);		// y�Nm���̓���

public:
	Date();										// �f�t�H���g�R���X�g���N�^
	Date(int yy, int mm = 1, int dd = 1);		// �R���X�g���N�^

	// year�N�͉[�N���H
	static bool is_leap(int year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

	int year()  const { return y; }			// �N��ԋp
	int month() const { return m; }			// ����ԋp
	int day()   const { return d; }			// ����ԋp
	bool is_leap() const { return is_leap(y); }		// �[�N���H
	Date preceding_day() const;				// �O���̓��t��ԋp
	Date following_day() const;				// �����̓��t��ԋp

	int day_of_year() const;				// �N���̌o�ߓ�����ԋp

	int day_of_week() const;				// �j����ԋp

	std::string to_string() const;			// ������\����ԋp
};

std::ostream& operator<<(std::ostream& s, const Date& x);		// �}���q
std::istream& operator>>(std::istream& s, Date& x);				// ���o�q

#endif
