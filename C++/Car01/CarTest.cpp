// �����ԃN���X�̗��p��

#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	string name;
	int width, length, height;
	double gas;

	cout << "�Ԃ̃f�[�^����͂���B\n";
	cout << "���O�́F";  cin >> name;
	cout << "�ԕ��́F";  cin >> width;
	cout << "�Ԓ��́F";  cin >> length;
	cout << "�ԍ��́F";  cin >> height;
	cout << "�K�\�����ʂ́F";  cin >> gas;

	Car myCar(name, width, length, height, gas);

	myCar.print_spec();		// �X�y�b�N�\��

	while (true) {
		cout << "���ݒn(" << myCar.x() << ", " << myCar.y() << ")\n";
		cout << "�c��R���F" << myCar.fuel() << '\n';
		cout << "�ړ�[0�cNo�^1�cYes]�F";
		int move;
		cin >> move;
		if (move == 0) break;

		double dx, dy;
		cout << "�w�����̈ړ������F";  cin >> dx;
		cout << "�x�����̈ړ������F";  cin >> dy;
		if (!myCar.move(dx, dy))
			cout << "\a�R��������܂���I\n";
	}
}
