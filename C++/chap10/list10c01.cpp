// string�N���X�̗��p��

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s1 = "ABC";
	string s2 = "HIJKLMN";
	string digits = "0123456789";

	s1 += "DEF";							// s1�̖�����"DEF"��A��
	s1 += 'G';								// s1�̖�����'G'��A��
	s1 += s2;								// s1�̖�����"HIJKLMN"��A��
	s1.insert(6, digits.substr(5, 3));		// s1[6]��"567"��}��

	s2.replace(3, 2, "kl");					// s2[3]�`s2[4]��"kl"�ɒu��
	s2.erase(6);							// s2[6]���폜

	cout << "s1 = ";
	for (int i = 0; i < s1.length(); i++)
		cout << s1[i];
	cout << '\n';
	cout << "s2 = " << s2 << '\n';
}
