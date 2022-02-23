/*Task 2.17.4)*/
#include<stdio.h>
#include<math.h>
float arctg(float x)
{
	return atan(x) / acos(-1) * 180;
}
float arctg_derivative(float x)
{
	return 1.0/(1+x*x);
}
int main()
{
	float a;
	scanf_s("%f", &a);
	printf("arctg(x)=%f\n", arctg(a));
	printf("arctg_derivative(x)=%f\n", arctg_derivative(a));
}