/*Task 4.13c*/
#include<stdio.h>
#include<math.h>
int main()
{
	double x,s=1;
	int n;
	scanf_s("%lf", &x);
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s = s + pow(sin(x* acos(-1.0) / 180), i);
	}
	printf("S=%lf\n", s);
}