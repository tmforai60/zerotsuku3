// �z��̗v�f�̒l�ƃA�h���X��\��

#include <iostream>

using namespace std;

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int* p = a;		// p��a[0]���w��

	for (int i = 0; i < 5; i++)			// �v�f�̒l��\��
		cout << "a[" << i << "] = " << a[i] << "  *(a+" << i << ") = " << *(a + i) << "  "
		     << "p[" << i << "] = " << p[i] << "  *(p+" << i << ") = " << *(p + i) << "\n";

	for (int i = 0; i < 5; i++)			// �v�f�ւ̃|�C���^��\��
		cout << "&a[" << i << "] = " << &a[i] << "  a+" << i << " = " << a + i << "  "
		     << "&p[" << i << "] = " << &p[i] << "  p+" << i << " = " << p + i << "\n";
}
