// ���݂̓��t�E������\��

#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	time_t current = time(NULL);				// ���݂̗��
	struct tm* timer = localtime(&current);		// �v�f�ʂ̎����i�n�����j
	char* wday_name[] = {"��", "��", "��", "��", "��", "��", "�y"};

	cout << "���݂̓��t�E������"
		 << timer->tm_year + 1900     << "�N"
		 << timer->tm_mon + 1         << "��"
		 << timer->tm_mday            << "���i"
		 << wday_name[timer->tm_wday] << "�j"
		 << timer->tm_hour            << "��"
		 << timer->tm_min             << "��"
		 << timer->tm_sec             << "�b�ł��B\n";
}
