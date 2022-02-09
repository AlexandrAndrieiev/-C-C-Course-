/*Task 1.5*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, x2, x4, x6, x9;
	printf("x=");
	scanf_s("%f", &x);
	x2 = x * x;
	x4 = x2 * x2;
	x6 = x2 * x4;
	x9 = x4 * x4 * x;
	printf("x^4=%f\n", x4);
	printf("x^6=%f\n", x6);
	printf("x^9=%f", x9);
}