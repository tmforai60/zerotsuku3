// �R���X�g���N�^�������q�̌ďo���������m�F

#include <iostream>

using namespace std;

class Int {
	int v;	// �l
public:
	Int(int val) : v(val) { cout << v << '\n'; }
};

class Abc {
	Int a;
	Int b;
	Int c;

public:
	Abc(int aa, int bb, int cc) : c(cc), b(bb), a(aa) { }	// �R���X�g���N�^
};

int main()
{
	Abc x(1, 2, 3);
}
