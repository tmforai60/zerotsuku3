// 3�s2��̂Q�����z��̑S�\���v�f�ɒl��ǂݍ���ŕ\��

#include <iostream>

using namespace std;

int main()
{
	int m[3][2];	// 3�s2��̂Q�����z��

	cout << "�e�\���v�f�̒l��������B\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "m[" << i << "][" << j << "]�F";
			cin >> m[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "m[" << i << "][" << j << "]�F" << m[i][j] << '\n';
		}
	}
}
