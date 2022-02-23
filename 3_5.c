/*Task 3.5*/
#include<stdio.h>
int main()
{
	float x, y;
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	if (x > y)
	{
		printf("More=%f\n", x);
		printf("Less=%f", y);
	}
	else
	{
		printf("More=%f\n", y);
		printf("Less=%f", x);
	}
}