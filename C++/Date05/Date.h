// ���t�N���XDate�i��T�ŁF�w�b�_���j

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
	static int days_of_year(int y);				// y�N�̓���
	static int days_of_month(int y, int m);		// y�Nm���̓���

	// �������ꂽ���i1�`12�͈̔͊O�̕s���Ȓl�𒲐��j
	static int adjusted_month(int m);

	// �������ꂽy�Nm����d���i1�`28/29/30/31�͈̔͊O�̕s���Ȓl�𒲐��j
	static int adjusted_day(int y, int m, int d);

public:
	Date();										// �f�t�H���g�R���X�g���N�^
	Date(int yy, int mm = 1, int dd = 1);		// �R���X�g���N�^

	//--- year�N�͉[�N���H ---//
	static bool leap_year(int year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

	int year()  const { return y; }			// �N��ԋp
	int month() const { return m; }			// ����ԋp
	int day()   const { return d; }			// ����ԋp

	void set_year( int yy);					// �N��yy�ɐݒ�
	void set_month(int mm);					// ����mm�ɐݒ�
	void set_day(  int dd);					// ����dd�ɐݒ�

	void set(int yy, int mm, int dd);		// ���t��yy�Nmm��dd���ɐݒ�

	bool leap_year() const { return leap_year(y); }		// �[�N���H

	Date preceding_day() const;				// �O���̓��t��ԋp
	Date following_day() const;				// �����̓��t��ԋp

	int day_of_year() const;				// �N���̌o�ߓ�����ԋp

	int day_of_week() const;				// �j����ԋp

	std::string to_string() const;			// ������\����ԋp

	Date& operator++();							// �P���i�߂�i�O�u�����j
	Date  operator++(int);						// �P���i�߂�i��u�����j

	Date& operator--();							// �P���߂��@�i�O�u�����j
	Date  operator--(int);						// �P���߂��@�i��u�����j

	Date& operator+=(int n);					// n���i�߂�iDate += int�j
	Date& operator-=(int n);					// n���߂��@�iDate -= int�j

	Date operator+(int n) const;					 // n��������߂�iDate + int�j
	friend Date operator+(int n, const Date& date);  // n��������߂�iint + Date�j

	Date operator-(int n) const;				// n���O�����߂�@�iDate - int�j

	long operator-(const Date& day) const;		// ���t�̍������߂�iDate - Date�j

	bool operator==(const Date& day) const;		// day�Ɠ��������H
	bool operator!=(const Date& day) const;		// day�ƈႤ�����H

	bool operator> (const Date& day) const;		// day���ォ�H
	bool operator>=(const Date& day) const;		// day�ȍ~���H
	bool operator< (const Date& day) const;		// day���O���H
	bool operator<=(const Date& day) const;		// day�ȑO���H
};

std::ostream& operator<<(std::ostream& s, const Date& x);	// �}���q
std::istream& operator>>(std::istream& s,       Date& x);	// ���o�q

#endif
