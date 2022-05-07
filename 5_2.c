/*Task 5_2*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,f1=1,f2=1,i=2,s=1;
	double a;
	scanf_s("%d", &n);
	scanf_s("%lf", &a);
	if (n == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			int x = f1;
			f1 = f2;
			f2 = x + f2;
		}
		printf("%d\n", f2);
	}
	f1 = 1;
	f2 = 1;
	while (f2 <= a)
	{
		int x = f1;
		f1 = f2;
		f2 = x + f2;
		i = i + 1;
	}
	printf("%d\n", i-1);
	printf("%d\n", i);
	f1 = 1;
	f2 = 1;
	while(f2<1000)
	{
		s = s + f2;
		int x = f1;
		f1 = f2;
		f2 = x + f2;
	}
	printf("%d", s);
}