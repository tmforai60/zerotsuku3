// ���t�N���XDate�i��T�ŁF�\�[�X���j

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

// ���N�̊e���̓���
int Date::dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//--- y�Nm���̓��������߂� ---//
int Date::days_of_month(int y, int m)
{
	return dmax[m - 1] + (m == 2 && leap_year(y));
}

//--- year�N�̓����i���N�c365�^�[�N�c366�j---//
int Date::days_of_year(int year)
{
	return 365 + leap_year(year);
}

//--- �������ꂽm���i1�`12�͈̔͊O�̒l�𒲐��j---//
int Date::adjusted_month(int m)
{
	return m < 1 ? 1 : m > 12 ? 12 : m;
}

//--- �������ꂽy�Nm����d���i1�`28/29/30/31�͈̔͊O�̒l�𒲐��j---//
int Date::adjusted_day(int y, int m, int d)
{
	if (d < 1)
		return 1;

	int max_day = days_of_month(y, m);		// y�Nm���̓���

	return d > max_day ? max_day : d;
}

//--- �f�t�H���g�R���X�g���N�^�i�����̓��t�ɐݒ�j---//
Date::Date()
{
	time_t current = time(NULL);				// ���݂̗�����擾
	struct tm* local = localtime(&current);		// �v�f�ʂ̎����ɕϊ�

	y = local->tm_year + 1900;		// �N�Ftm_year�͐���N-1900
	m = local->tm_mon + 1;			// ���Ftm_mon��0�`11
	d = local->tm_mday;				// ��
}

//--- �R���X�g���N�^�i�w�肳�ꂽ�N�����ɐݒ�j---//
Date::Date(int yy, int mm, int dd)
{
	set(yy, mm, dd);				// ���t��yy�Nmm��dd���ɐݒ�
}

//--- �N��yy�ɐݒ� ---//
void Date::set_year(int yy)
{
	y = yy;							// �N
	d = adjusted_day(y, m, d);		// ���i�s���Ȓl�𒲐��j
}

//--- ����mm�ɐݒ� ---//
void Date::set_month(int mm)
{
	m = adjusted_month(mm);			// ���i�s���Ȓl�𒲐��j
	d = adjusted_day(y, m, d);		// ���i�s���Ȓl�𒲐��j
}

//--- ����dd�ɐݒ� ---//
void Date::set_day(int dd)
{
	d = adjusted_day(y, m, dd);		// ���i�s���Ȓl�𒲐��j
}

//--- ���t��yy�Nmm��dd���ɐݒ� ---//
void Date::set(int yy, int mm, int dd)
{
	y = yy;							// �N
	m = adjusted_month(mm);			// ���i�s���Ȓl�𒲐��j
	d = adjusted_day(y, m, dd);		// ���i�s���Ȓl�𒲐��j
}

//--- �O���̓��t��ԋp ---//
Date Date::preceding_day() const
{
	Date temp(*this);				// *this�̃R�s�[���쐬
	return --temp;					// �R�s�[�̑O�������߂ĕԋp
}

//--- �����̓��t��ԋp ---//
Date Date::following_day() const
{
	Date temp(*this);				// *this�̃R�s�[���쐬
	return ++temp;					// �R�s�[�̗��������߂ĕԋp
}

//--- �N���̌o�ߓ�����ԋp ---//
int Date::day_of_year() const
{
	int days = d;	// �N���̌o�ߓ���

	for (int i = 1; i < m; i++)			// 1���`(m-1)���̓�����������
		days += days_of_month(y, i);
	return days;
}

//--- �j����ԋp�i���j�`�y�j��0�`6�ɑΉ��j---//
int Date::day_of_week() const
{
	int yy = y;
	int mm = m;
	if (mm == 1 || mm == 2) {
		yy--;
		mm += 12;
	}
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

//--- ������\����ԋp ---//
string Date::to_string() const
{
	ostringstream s;
	s << y << "�N" << m << "��" << d << "��";
	return s.str();
}

//--- �P���i�߂�i�O�u�����F++(*this)�j---//
Date& Date::operator++()
{
	if (d < days_of_month(y, m))	// �������O�ł����
		d++;						// �@�@�����C���N�������g���邾��
	else {							// �����ɌJ��オ��
		if (++m > 12) {				// �@�@12���𒴂���̂ł����
			y++;					// �@�@�@�@�@���N�́c
			m = 1;					// �@�@�@�@�@�P���ɌJ��オ��
		}
		d = 1;						// �@�@���̌��̂P���ƂȂ�
	}
	return *this;
}

//--- �P���i�߂�i��u�����F(*this)++�j---//
Date Date::operator++(int)
{
	Date temp(*this);				// �C���N�������g�O�̒l���R�s�[
	++(*this);						// �O�u�������Z�q++�ɂ���ăC���N�������g
	return temp;					// �R�s�[��ԋp
}

//--- �P���߂��i�O�u�����F--(*this)�j---//
Date& Date::operator--()
{
	if (d > 1)						// ���n�߂łȂ����
		d--;						// �@�@�����f�N�������g���邾��
	else {							// �O���ɌJ�艺����
		if (--m <= 1) {				// �@�@�P���𒴂���̂ł����
			y--;					// �@�@�@�@�@�O�N�́c
			m = 12;					// �@�@�@�@�@12���ɌJ�艺����
		}
		d = days_of_month(y, m);	// �@�@�O���̌����ƂȂ�
	}
	return *this;
}

//--- �P���߂��i��u�����F(*this)--�j---//
Date Date::operator--(int)
{
	Date temp(*this);				// �f�N�������g�O�̒l���R�s�[
	--(*this);						// �O�u�������Z�q--�ɂ���ăf�N�������g
	return temp;					// �R�s�[��ԋp
}

//--- ���t��n���i�߂�i��������F*this += n�j---//
Date& Date::operator+=(int n)
{
	if (n < 0)							// n�����ł����
		return *this -= -n;			// ���Z�q-=�ɏ������ς˂�

	d += n;							// ����n��������

	while (d > days_of_month(y, m)) {	// �������̓������Ɏ��܂�悤�ɔN���𒲐�
		d -= days_of_month(y, m);
		if (++m > 12) {
			y++;
			m = 1;
		}
	}
	return *this;
}

//--- ���t��n���߂��i��������F*this -= int�j---//
Date& Date::operator-=(int n)
{
	if (n < 0)							// n�����ł����
		return *this += -n;			// ���Z�q+=�ɏ������ς˂�

	d -= n;							// ������n��������

	while (d < 1) {						// �������ɂȂ�悤�ɔN���𒲐�
		if (--m < 1) {
			y--;
			m = 12;
		}
		d += days_of_month(y, m);
	}
	return *this;
}

//--- n��������߂�i���Z�F*this + n�j---//
Date Date::operator+(int n) const
{
	Date temp(*this);
	return temp += n;						// ���Z�q+=�𗘗p
}

//--- day��n��������߂�i���Z�Fn + day�j---//
Date operator+(int n, const Date& day)
{
	return day + n;						// Date + int�̉��Z�q+�ɏ������ς˂�
}

//--- date��n���O�����߂�i���Z�F*this - n�j---//
Date Date::operator-(int n) const
{
	Date temp(*this);
	return temp -= n;						// ���Z�q-=�𗘗p
}

//--- ���t�̍������߂�i���Z�F*this - day�j---//
long Date::operator-(const Date& day) const
{
	long count;
	long count1 = this->day_of_year();	// *this�̔N���o�ߓ���
	long count2 = day.day_of_year();	// day  �̔N���o�ߓ���

	if (y == day.y)										// *this��day�͓����N
		count = count1 - count2;
	else if (y > day.y) {								// *this�̂ق����V�����N
		count = days_of_year(day.y) - count2 + count1;
		for (int yy = day.y + 1; yy < y; yy++)
			count += days_of_year(yy);
	} else {											// *this�̂ق����Â��N
		count = -(days_of_year(y) - count1 + count2);
		for (int yy = y + 1; yy < day.y; yy++)
			count -= days_of_year(yy);
	}

	return count;
}

//--- day�Ɠ������t���H�i�����F*this == day�j---//
bool Date::operator==(const Date& day) const
{
	return y == day.y && m == day.m && d == day.d;
}

//--- day�ƈႤ���t���H�i�����F*this != day�j---//
bool Date::operator!=(const Date& day) const
{
	return !(*this == day);						// ���Z�q==�𗘗p
}

//--- day����̐V�������t���H�i�֌W�F*this > day�j---//
bool Date::operator>(const Date& day) const
{
	if (y > day.y) return true;		// �N���قȂ�i�V�����j
	if (y < day.y) return false;	//     �V�@�@�i�Â��j

	if (m > day.m) return true;		// �N�������� �| �����قȂ�i�V�����j
	if (m < day.m) return false;	//     �V�@�@�@�@�@�@�@�@�@�i�Â��j

	return d > day.d;				//     �V     �| �����������i�����r�j
}

//--- day�ȍ~�̓��t���H�i�֌W�F*this >= day�j---//
bool Date::operator>=(const Date& day) const
{
	return !(*this < day);						// ���Z�q<�𗘗p
}

//--- day���O�̌Â����t���H�i�֌W�F*this < day�j---//
bool Date::operator<(const Date& day) const
{
	if (y < day.y) return true;		// �N���قȂ�i�Â��j
	if (y > day.y) return false;	//     �V    �i�V�����j

	if (m < day.m) return true;		// �N�������� �| �����قȂ�i�Â��j
	if (m > day.m) return false;	//     �V�@�@�@�@�@�@�@�@�@�i�V�����j

	return d < day.d;				//     �V     �| �����������i�����r�j
}

//--- day�ȑO�̓��t���H�i�֌W�F*this <= day�j---//
bool Date::operator<=(const Date& day) const
{
	return !(*this > day);						// ���Z�q>�𗘗p
}

//--- �o�̓X�g���[��s�ɓ��tx��}�� ---//
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}

//--- ���̓X�g���[��s������t�𒊏o����x�Ɋi�[ ---//
istream& operator>>(istream& s, Date& x)
{
	int yy, mm, dd;
	char ch;

	s >> yy >> ch >> mm >> ch >> dd;
	x = Date(yy, mm, dd);
	return s;
}