/*Task 4.1*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x, y;
	scanf_s("%f %d", &x, &n);
	y = x;
	for (int i = 1; i <= n; i++)
	{
		y = sin(y);
	}
	printf("%f", y);
}