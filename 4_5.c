/*Task 4.5*/
#include<stdio.h>
int main()
{
	int n, k=1;
	scanf_s("%d", &n);
	for (int i = n; i > 0; i = i - 2)
	{
		k = k * i;
	}
	printf("n!!=%d", k);
}