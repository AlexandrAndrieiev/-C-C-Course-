/*Task_5_17a*/
#include<stdio.h>
#include<math.h>
int main()
{
	double x, e,a0=1,a1;
	long long int k = 1, l = 2;
	scanf_s("%lf", &x);
	scanf_s("%lf", &e);
	a1 = 1 + pow(x, 2 * k) / l;
	while (fabs(a1-a0)>e)
	{
		k = k + 1;
		l = l * 2 * k * (2 * k - 1);
		a0 = a1;
		a1 = a1 + pow(x, 2 * k) / l;
	} 
	printf("%lf\n", a1);
	printf("%d", k+1);
}