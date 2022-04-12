/*Task 7_8_8)*/
#include<stdio.h>
#include <malloc.h>
int main()
{

	int n,i=0,k=0;
	int* m;
	int a[16],b[16];
	scanf_s("%d", &n);
	m = (int*)malloc(n * sizeof(int));
	for (int y = 0; y < n; y++)
	{
		printf("m[%d] = ", y);
		scanf_s("%d", &m[y]);
	}
	for (int t = 0; t < n; t++)
	{
		i = 0;
		while (m[t] > 0)
		{

			a[i] = m[t] % 2;
			i = i + 1;
			m[t] = m[t] / 2;
		}
		for (int j = 0; j < i; j++)
		{
			b[j] = a[i - j - 1];
		}
		if (i < 8 || i < 5 || i < 6)
		{
			continue;
		}
		else
		{
			if (b[4] + b[5] + b[7] == 3)
			{
				k = k + 1;
			}
		}
	}
	printf("%d", k);
	return 0;
}