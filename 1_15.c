/*Task 1.15*/
#include<stdio.h>
int main()
{
	float m, v,E;
	printf("m=");
	scanf_s("%f", &m);
	printf("v=");
	scanf_s("%f", &v);
	E = m * v * v / 2;
	printf("E=%f", E);
}