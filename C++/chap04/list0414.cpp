// ��̐����l�̕��ϒl�������l�Ƃ��ċ��߂�i���̂Q�F�ÓI�L���X�g���Z�q�j

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "��̐����lx��y�̕��ϒl�����߂܂��B\n";
	cout << "x�̒l�F";	cin >> x;	// x�ɐ����l��ǂݍ���
	cout << "y�̒l�F";	cin >> y;	// y�ɐ����l��ǂݍ���

	double ave = static_cast<double>(x + y) / 2;	// ���ϒl�������ŋ��߂�
	cout << "x��y�̕��ϒl��" << ave << "�ł��B\n";	// ���ϒl��\��
}
