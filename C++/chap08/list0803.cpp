// �z��ɕ�������i�[���ĕ\���i�������j

#include <iostream>

using namespace std;

int main()
{
	char s1[] = {'A', 'B', 'C', '\0'};
	char s2[] = {"ABC"};
	char s3[] = "ABC";

	cout << "�z��s1�ɕ�����\"" << s1 << "\"���i�[����Ă��܂��B\n";
	cout << "�z��s2�ɕ�����\"" << s2 << "\"���i�[����Ă��܂��B\n";
	cout << "�z��s3�ɕ�����\"" << s3 << "\"���i�[����Ă��܂��B\n";
}
