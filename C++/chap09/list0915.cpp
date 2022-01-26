// ��̖��O��Ԃ�using�錾

#include <iostream>

using namespace std;

namespace English {

	int x = 1;

	void print_x()
	{
		cout << "The value of x is " << x << ".\n";
	}

	void hello()
	{
		cout << "Hello!\n";
	}
}

namespace Japanese {

	int x = 2;

	void print_x()
	{
		cout << "�ϐ�x�̒l��" << x << "�ł��B\n";
	}

	void hello()
	{
		cout << "����ɂ��́I\n";
	}
}

int main()
{
	using Japanese::hello;	// Japanese���O��Ԃ̗��p��錾

	cout << "English::x = " << English::x << '\n';
	cout << "Japanese::x = " << Japanese::x << '\n';

	English::hello();
	hello();				// Japanese::�͕s�v
}
