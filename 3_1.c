/*Task 3.1*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x, a1,a2,a3;
	scanf_s("%d", &x);
	a1 = x / 100;
	a3 = x % 10;
	a2 = (x / 10) % 10;
	printf("%d\n", a1);
	printf("%d\n", a2);
	printf("%d\n", a3);
	printf("S=%d\n", a1+a2+a3);
	printf("palindrome=%d\n", 100*a3+10*a2+a1);
}