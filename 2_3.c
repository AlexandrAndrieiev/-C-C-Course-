/*Task2.3*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, p;
	printf("a=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	printf("c=");
	scanf_s("%f", &c);
	p = (a + b + c) / 2;
	printf("S=%f", sqrt(p*(p-a)*(p-b)*(p-c)));
}