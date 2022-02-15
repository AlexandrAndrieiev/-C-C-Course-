/*Task 2.2*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b;
	printf("a=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	printf("c=%f", sqrt(pow(a, 2) + pow(b, 2)));
}