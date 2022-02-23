/*Task 4.4*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x, f = 0;
	scanf_s("%f %d", &x, &n);
	for (int i = 1; i <= n; i++)
	{
		f = f + i * pow(x, i);
	}
	printf("f=%f", f);
}