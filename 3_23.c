/*Task 3.23â*/
#include<stdio.h>
float f(float x, float a)
{
	if (x < 0)
	{
		return a * x;
	}
	else
	{
		return 0;
	}
}
float fd(float x, float a)
{
	if (x < 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}
int main()
{
	float x, a;
	scanf_s("%f %f", &x, &a);
	printf("f(x,a)=%f\n", f(x, a));
	printf("fd(x,a)=%f", fd(x, a));
}