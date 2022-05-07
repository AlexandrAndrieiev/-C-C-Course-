/*Task 5_1*/
#include<stdio.h>
int main()
{
	double a, s = 1;
	int i = 2;
	scanf_s("%lf", &a);
	while (a >= s)
	{
		s = s + 1.0 / i;
		i = i + 1;
	}
	printf("%lf\n", s);
	printf("%d", i-1);
}