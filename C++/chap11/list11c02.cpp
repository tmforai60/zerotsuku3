// �����񂩂�̒��o

#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string s = "2125/12/18";
	istringstream is(s);	// ������s�ɐڑ����ꂽ��������̓X�g���[��
	int y, m, d;
	char ch;

	is >> y >> ch >> m >> ch >> d;
	cout << y << "�N" << m << "��" << d << "��\n";
}
