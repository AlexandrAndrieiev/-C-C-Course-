/*Task 3.19*/
#include<stdio.h>
#include<math.h>
int f1(int n)
{
	if (n > 0 && n % 2 != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int f2(int n)
{
	if (abs(n % 10) == 5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int f3(int n, int m)
{
	if (n % m == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int f4(int n, int k, int m)
{
	if (n % m == 0 && k % m == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n, m, k;
	scanf_s("%d %d %d", &n, &k, &m);
	printf("f1=%d\n", f1(n));
	printf("f2=%d\n", f2(n));
	printf("f3=%d\n", f3(n,m));
	printf("f4=%d\n", f4(n,k,m));
}