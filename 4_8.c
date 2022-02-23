/*Task 4.8*/
#include<stdio.h>
int main()
{
	int m, n=1,k=0;
	scanf_s("%d", &m);
	while (n <= m)
	{
		n = n * 4;
		k = k + 1;
	}
	printf("%d", k - 1);
}