/*Task 1.7*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x, fx;
	int intx, minx, maxx;
	printf("x=");
	scanf_s("%f", &x);
	intx = (int)x;
	fx = x - intx;
	minx = intx + 1;
	maxx = intx - 1;
	printf("Fractional part of x: %f\n", fx);
	printf("Whole part x: %d\n", intx);
	printf("Less than x: %d\n", maxx);
	printf("More than x: %d", minx);
}