/*Task 1.4d)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x;
	float y;
	float x2, x3, x4;
	printf("x=");
	scanf_s("%f", &x);
	x2 = x * x;
	x3 = x2 * x;
	x4 = x2 * x2;
	y = 16 * x4 + 8 * x3 + 4 * x2 + 2 * x + 1;
	printf("%f", y);
}