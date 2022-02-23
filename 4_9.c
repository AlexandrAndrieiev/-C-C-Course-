/*Task 4.9*/
#include<stdio.h>
int main()
{
	int n, r = 0, k = 1;
	scanf_s("%d", &n);
	while (k <= n)
	{
		k = k * 2;
		r = r + 1;
	}
	printf("%d", r);
}