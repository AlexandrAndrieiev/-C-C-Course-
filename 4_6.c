/*Task 4.6*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float k = 0, k1=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		k = sqrt(2 + k);
	}
	for (int i = n; i >=1; i--)
	{
		k1 = sqrt(3*i + k1);
	}
	printf("%f\n", k);
	printf("%f", k1);
}