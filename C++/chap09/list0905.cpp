// �ׂ���l��ԋp����֐�

//--- x��n���Ԃ� ---//
double power(double x, int n)
{
	double tmp = 1.0;

	for (int i = 1; i <= n; i++)
		tmp *= x;	// tmp��x���|����
	return tmp;
}
