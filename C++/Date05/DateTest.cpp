// ���t�N���XDate�i��T�Łj�̗��p��

#include <iostream>
#include "Date.h"

using namespace std;

//--- ���t�Ɋւ������\�� ---//
void display(const Date& day)
{
	string dw[] = {"��", "��", "��", "��", "��", "��", "�y"};
	cout << "�E���t" << day << "�Ɋւ�����\n";
	cout << "  �j����" << dw[day.day_of_week()] << "�j��";
	cout << "  �N���o�ߓ�����" << day.day_of_year() << "��";
	cout << "  ���̔N�͉[�N��" << (day.leap_year() ? "����" : "�͂Ȃ��B") << '\n';
}

//--- ���t��ύX ---//
void change(Date& day)
{
	while (true) {
		cout << "[1]�N�ύX [2]���ύX [3]���ύX [4]�N�����ύX "
			 << "[5]n���i�߂� [6]n���߂� [0]�߂�F";
		int selected;
		cin >> selected;

		if (selected == 0) return;

		int y, m, d, n;
		if (selected == 1 || selected == 4) { cout << "�N�F";   cin >> y; }
		if (selected == 2 || selected == 4) { cout << "���F";   cin >> m; }
		if (selected == 3 || selected == 4) { cout << "���F";   cin >> d; }
		if (selected == 5 || selected == 6) { cout << "�����F"; cin >> n; }

		switch (selected) {
		 case 1: day.set_year(y);	break;		// y�N�ɐݒ�
		 case 2: day.set_month(m);	break;		// m���ɐݒ�
		 case 3: day.set_day(d);	break;		// d���ɐݒ�
		 case 4: day.set(y, m, d);	break;		// y�Nm��d���ɐݒ�
		 case 5: day += n;			break;		// n���i�߂�
		 case 6: day -= n;			break;		// n���߂�
		}
		cout << day << "�ɍX�V����܂����B\n";
	}
}

//--- ��������ь������Z�q��K�p ---//
void inc_dec(Date& day)
{
	while (true) {
		cout << "[1]++day  [2]day++  [3]--day  [4]day-- [0]�߂�F";
		int selected;
		cin >> selected;

		if (selected == 0) return;

		switch (selected) {
		 case 1: cout << "++day = " << ++day << '\n';  break;	// �O�u����
		 case 2: cout << "day++ = " << day++ << '\n';  break;	// ��u����
		 case 3: cout << "--day = " << --day << '\n';  break;	// �O�u����
		 case 4: cout << "day-- = " << day-- << '\n';  break;	// ��u����
		}
		cout << "day   = " << day << '\n';
	}
}

//--- �O��̓��t�����߂� ---//
void before_after(Date& day)
{
	while (true) {
		cout << "[1]���� [2]�O�� [3]n����(day+n) [4]n����(n+day)"
			 << "[5]n���O [0]�߂�F";
		int selected;
		cin >> selected;

		if (selected == 0) return;

		int n;
		if (selected >= 3 && selected <= 5) {
			cout << "�����F";  cin >> n;
		}

		cout << "�����";
		switch (selected) {
		 case 1: cout << day.following_day();	break;	// ����
		 case 2: cout << day.preceding_day();	break;	// �O��
		 case 3: cout << day + n;				break;	// n����iDate + int �j
		 case 4: cout << n   + day;				break;	// n����iint  + Date�j
		 case 5: cout << day - n;				break;	// n���O�iDate - int �j
		}
		cout << "�ł��B\n";
	}
}

//--- ���̓��t�Ƃ̔�r ---//
void compare(const Date& day)
{
	int y, m, d;
	cout << "��r�Ώۂ̓��tday2����͂���B\n";
	cout << "�N�F";  cin >> y;
	cout << "���F";  cin >> m;
	cout << "���F";  cin >> d;

	Date day2(y, m, d);	// ��r�Ώۂ̓��t

	cout << boolalpha;
	cout << "day  = " << day  << '\n';
	cout << "day2 = " << day2 << '\n';
	cout << "day  -  day2  = " << (day  -  day2) << '\n';
	cout << "day2 -  day   = " << (day2 -  day ) << '\n';
	cout << "day  == day2  = " << (day  == day2) << '\n';
	cout << "day  != day2  = " << (day  != day2) << '\n';
	cout << "day  >  day2  = " << (day  >  day2) << '\n';
	cout << "day  >= day2  = " << (day  >= day2) << '\n';
	cout << "day  <  day2  = " << (day  <  day2) << '\n';
	cout << "day  <= day2  = " << (day  <= day2) << '\n';
}

int main()
{
	int y, m, d;
	cout << "���tday����͂���B\n";
	cout << "�N�F";  cin >> y;
	cout << "���F";  cin >> m;
	cout << "���F";  cin >> d;

	Date day(y, m, d);	// �ǂݍ��񂾓��t

	while (true) {
		cout << "[1]���\�� [2]���t�̕ύX [3]���������Z�q [4]�O��̓��t "
			 << "[5]��r [0]�I���F";

		int selected;
		cin >> selected;

		if (selected == 0) break;

		switch (selected) {
		 case 1: display(day);		break;	// ���t�Ɋւ������\��
		 case 2: change(day);		break;	// ���t��ύX
		 case 3: inc_dec(day);		break;	// �������Z�q�E�������Z�q
		 case 4: before_after(day);	break;	// �O��̓��t�����߂�
		 case 5: compare(day);		break;	// ���̓��t�Ƃ̔�r
		}
	}
}
