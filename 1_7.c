/*Task 1_7*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	printf("x=");
	scanf_s("%f", &x);
	int y;
	y = (int)x;
	float y1;
	y1 = x - y;
	printf("%d\n", y);
	printf("%f", y1);
}