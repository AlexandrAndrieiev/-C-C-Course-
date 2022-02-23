/*Task 4.7*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x, f=1,k=1;
	scanf_s("%f %d", &x, &n);
	for (int i = 1; i <= n; i++)
	{
		k = k * i;
		f = f + pow(x, i) / k;
	}
	printf("%f", f);
}