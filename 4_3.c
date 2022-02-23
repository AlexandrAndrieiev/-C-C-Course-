/*Task 4.3*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x, y,f1=0,f2=1;
	scanf_s("%f %f %d", &x, &y, &n);
	for (int i = 0; i <= n; i++)
	{
		f1 = f1 + pow(x, i);
	}
	for (int i = 1; i <= n; i++)
	{
		f2 = f2 + pow(x, pow(2,i))*pow(y,i);
	}
	printf("f1(x,n)=%f\n", f1);
	printf("f1(x,y,n)=%f\n", f2);
}