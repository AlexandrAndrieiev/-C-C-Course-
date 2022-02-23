/*Task 3.3*/
#include<stdio.h>
int main()
{
	long long int x, y, z, d;
	scanf_s("%I64d, %I64d, %I64d", &x, &y, &z);
	d = x * y * z;
	printf("%I64d", d);
}