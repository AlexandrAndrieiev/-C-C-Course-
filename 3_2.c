/*Task 3.2*/
#include<stdio.h>
int main()
{
	int x, a1, a2, a3;
	scanf_s("%d", &x);
	a1 = x / 100;
	a3 = x % 10;
	a2 = (x / 10) % 10;
	if (a1 != a2 && a2 != a3 && a1 != a3)
	{
		printf("%d\n", x);
		printf("%d\n", 100*a1+10*a3+a2);
		printf("%d\n", 100 * a2 + 10 * a3 + a1);
		printf("%d\n", 100 * a2 + 10 * a1 + a3);
		printf("%d\n", 100 * a3 + 10 * a1 + a2);
		printf("%d\n", 100 * a3 + 10 * a2 + a1);
	}
}