// �g���̍ő�l�Ƒ̏d�̍ő�l�����߂�

#include <iostream>

using namespace std;

//--- �v�f��n�̔z��a�̍ő�l��ԋp ---//
int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int main()
{
	const int ninzu = 5;				// �l��
	int height[ninzu], weight[ninzu];	// �g���E�̏d

	cout << ninzu << "�l�̐g���Ƒ̏d����͂���B\n";
	for (int i = 0; i < ninzu; i++) {
		cout << i + 1 << "�Ԗڂ̐g���F";
		cin >> height[i];
		cout << i + 1 << "�Ԗڂ̑̏d�F";
		cin >> weight[i];
	}
	int hmax = maxof(height, ninzu);	// �g���̍ő�l
	int wmax = maxof(weight, ninzu);	// �̏d�̍ő�l

	cout << "�g���̍ő�l�F" << hmax << "cm\n";
	cout << "�̏d�̍ő�l�F" << wmax << "kg\n";
}
