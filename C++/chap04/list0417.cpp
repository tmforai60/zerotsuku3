// �I�΂ꂽ�����̖�����\��

#include <iostream>

using namespace std;

int main()
{
	enum animal { Dog, Cat, Monkey, Invalid };
	int type;

	do {
		cout << "0�c���@1�c�L�@2�c���@3�c�I���F";
		cin >> type;
	} while (type < Dog || type > Invalid);

	if (type != Invalid) {
		animal selected = static_cast<animal>(type);
		switch (selected) {
		 case Dog	 : cout << "��������!!\n";	break;
		 case Cat	 : cout << "�j���`�I!!\n";	break;
		 case Monkey : cout << "�L�b�L�b!!\n";	break;
		}
	}
}
