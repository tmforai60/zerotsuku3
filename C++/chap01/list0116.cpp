// 0�`9�̃��b�L�[�i���o�[�𗐐��Ő������ĕ\��

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));				// �����̎��ݒ�

	int lucky = rand() % 10;		// 0�`9�̗���

	cout << "�����̃��b�L�[�i���o�[��" << lucky << "�ł��B\n";
}
