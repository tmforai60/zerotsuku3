#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	const int A_SIZE = 5;		// �z��a�̗v�f��

	// �z��a��b�͂P�����z��i�v�f�^��int�ŗv�f����5�j
	int a[A_SIZE];
	int b[] = {1, 2, 3, 4, 5};

	// �z��b�̗v�f��
	int b_size = sizeof(b) / sizeof(b[0]);

	// �z��b�̑S�v�f��a�ɃR�s�[
	for (int i = 0; i < A_SIZE; i++)
		a[i] = b[i];

	// �z��a�̑S�v�f�̒l��\��
	for (int i = 0; i < A_SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	// �z��b�̑S�v�f�̒l��\��
	for (int i = 0; i < b_size; i++)
		cout << "b[" << i << "] = " << b[i] << '\n';

	// �z��a�̑S�v�f�̍��v��sum�ɋ��߂ĕ\��
	int sum = 0;
	for (int i = 0; i < A_SIZE; i++)
		sum += a[i];
	cout << "�z��a�̑S�v�f�̍��v��" << sum << '\n'; 

	// �z��c�͂Q�����z��i�v�f�^��int[3]�ŗv�f����2�j
	int c[2][3] = { {1, 2, 3},
					{4, 5, 6},
				  };

	int c_height = sizeof(c) / sizeof(c[0]);		// �s��
	int c_width  = sizeof(c[0]) / sizeof(c[0][0]);	// ��

	cout << "�z��c��" << c_height << "�s" << c_width << "���"
		 << "�Q�����z��ł��B\n";

	// �z��c�̑S�\���v�f�̒l��\��
	for (int i = 0; i < c_height; i++) {
		for (int j = 0; j < c_width; j++) {
			cout << "c[" << i << "][" << j << "] = " << c[i][j] << '\n';
		}
	}

	// �z��Ɨv�f�ƍ\���v�f�̌^��\��
	cout << "�z��a�̌^�F" << typeid(a).name()    << '\n';
	cout << "a�̗v�f�^�F" << typeid(a[0]).name() << '\n';
	cout << "�z��b�̌^�F" << typeid(b).name()    << '\n';
	cout << "b�̗v�f�^�F" << typeid(b[0]).name() << '\n';
	cout << "�z��c�̌^�F" << typeid(c).name()    << '\n';
	cout << "c�̗v�f�^�F" << typeid(c[0]).name() << '\n';
	cout << "c�̍\���v�f�^�F" << typeid(c[0][0]).name() << '\n';
}
