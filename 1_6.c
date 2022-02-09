/*Task 1.6*/
#include<stdio.h>
int main()
{
	float x,f;
	printf("Temperature in degrees Celsius: ");
	scanf_s("%f", &x);
	f = 9 * x / 5 + 32;
	printf("F=%f", f);
}