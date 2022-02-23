/*Task 4.2*/
#include<stdio.h>
int main()
{
	int n,k1=1,k2=1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		k1 = k1 * i;
	}
	for (int i = n; i >=1; i--)
	{
		k2 = k2 * i;
	}
	printf("%d\n", k1);
	printf("%d\n", k2);
}