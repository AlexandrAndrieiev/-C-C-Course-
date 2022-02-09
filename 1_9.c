/*Task 1.9*/
#include<stdio.h>
int main()
{
	float x, y;
	printf("x,y: ");
	scanf_s("%f %f", &x, &y);
	printf("Average: %f\n", (x + y) / 2);
	printf("Harmonic mean: %f", 2 / (1 / x + 1 / y));
}