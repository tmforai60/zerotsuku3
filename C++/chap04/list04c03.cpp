// double�^�̓�����\��

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "�ŏ��l�F" << numeric_limits<double>::min() << '\n';
	cout << "�ő�l�F" << numeric_limits<double>::max() << '\n';
	cout << "�������F" << numeric_limits<double>::radix  << "�i����"
					   << numeric_limits<double>::digits << "��\n";
	cout << "���@���F" << numeric_limits<double>::digits10 << '\n';
	cout << "�@�B�ÁF" << numeric_limits<double>::epsilon()<< '\n';
	cout << "�ő�̊ۂߌ덷�F" << numeric_limits<double>::round_error() << '\n';
	cout << "�ۂߗl���F";

	switch (numeric_limits<double>::round_style) {
	 case round_indeterminate:
						cout << "����ł��Ȃ��B\n"; break;
	 case round_toward_zero:
						cout << "�[���Ɍ������Ċۂ߂�B\n"; break;
	 case round_to_nearest:
						cout << "�\���\�ȍł��߂��l�Ɋۂ߂�B\n"; break;
	 case round_toward_infinity:
						cout << "������Ɍ������Ċۂ߂�B\n"; break;
	 case round_toward_neg_infinity:
						cout << "���̖�����Ɍ������Ċۂ߂�B\n"; break;
	}
}
