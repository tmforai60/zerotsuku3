// �v���O�������E�v���O�����������̕\���i���̂R�j

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int i = 0;
	while (argc-- > 0) {
		cout << "argv[" << i++ << "] = ";
		while (char c = *(*argv)++)
			cout << c;
		argv++;
		cout << '\n';
	}
}
