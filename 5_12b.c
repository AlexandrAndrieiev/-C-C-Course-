/*Task 5_12b*/
#include<stdio.h>
int main()
{
	double u, v, ak, bk,s=0,f;
	int n;
	long long int k = 1;
	scanf_s("%lf", &u);
	scanf_s("%lf", &v);
	scanf_s("%d", &n);
	ak = u;
	bk = v;
	for (int i = 0; i < n; i++)
	{
		k = k * (k + 1);
		s = s + ak * bk / k;
		f = ak;
		ak = 2 * bk + ak;
		bk = 2 * f * f + bk;
	}
	printf("%lf", s);
}