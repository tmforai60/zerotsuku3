// ��̐����l�̕��ϒl�������l�Ƃ��ċ��߂�i���̂P�j
// �ʉ��F�֐��I�L�@�ɂ��L���X�g

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "��̐����lx��y�̕��ϒl�����߂܂��B\n";
	cout << "x�̒l�F";	cin >> x;	// x�ɐ����l��ǂݍ���
	cout << "y�̒l�F";	cin >> y;	// y�ɐ����l��ǂݍ���

	double ave = double(x + y) / 2;					// ���ϒl�������ŋ��߂�
	cout << "x��y�̕��ϒl��" << ave << "�ł��B\n";	// ���ϒl��\��
}
