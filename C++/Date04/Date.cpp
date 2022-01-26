// ���t�N���XDate�i��S�ŁF�\�[�X���j

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
	return dmax[m - 1] + (is_leap(y) && m == 2);
}

//--- Date�̃f�t�H���g�R���X�g���N�^�i�����̓��t�ɐݒ�j---//
Date::Date()
{
	time_t current = time(NULL);				// ���݂̗�����擾
	struct tm* local = localtime(&current);		// �v�f�ʂ̎����ɕϊ�

	y = local->tm_year + 1900;		// �N�Ftm_year�͐���N-1900
	m = local->tm_mon + 1;			// ���Ftm_mon��0�`11
	d = local->tm_mday;
}

//--- Date�̃R���X�g���N�^�i�w�肳�ꂽ�N�����ɐݒ�j---//
Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
}

//--- �N���̌o�ߓ�����ԋp ---//
int Date::day_of_year() const
{
	int days = d;	// �N���̌o�ߓ���

	for (int i = 1; i < m; i++)			// 1���`(m-1)���̓�����������
		days += days_of_month(y, i);
	return days;
}

//--- �O���̓��t��ԋp ---//
Date Date::preceding_day() const
{
	Date temp = *this;		// ����̓��t

	if (temp.d > 1)
		temp.d--;
	else {
		if (--temp.m < 1) {
			temp.y--;
			temp.m = 12;
		}
		temp.d = days_of_month(temp.y, temp.m);
	}
	return temp;
}

//--- �����̓��t��ԋp ---//
Date Date::following_day() const
{
	Date temp = *this;		// ����̓��t

	if (temp.d < days_of_month(temp.y, temp.m))
		temp.d++;
	else {
		if (++temp.m > 12) {
			temp.y++;
			temp.m = 1;
		}
		temp.d = 1;
	}
	return temp;
}

//--- ������\����ԋp ---//
string Date::to_string() const
{
	ostringstream s;
	s << y << "�N" << m << "��" << d << "��";
	return s.str();
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

//--- �o�̓X�g���[��s��x��}�� ---//
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
