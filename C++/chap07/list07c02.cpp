// �|�C���^�������ւ̌^�ϊ�

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "n�̔Ԓn�F" << hex << reinterpret_cast<unsigned long>(&n) << '\n';
}
