/*task 3.6*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x, y, z;
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	scanf_s("%f", &z);
	if (fabs(x) > fabs(y) && fabs(x) > fabs(z))
	{
		printf("More=%f\n", x);
		if (fabs(y) > fabs(z))
		{
			printf("More=%f", z);
		}
		else
		{
			printf("Less=%f", y);
		}
	}
	else
	{
		if (fabs(y) > fabs(x) && fabs(y) > fabs(z))
		{
			printf("More=%f\n", y);
			if (fabs(x) > fabs(z))
			{
				printf("More=%f", z);
			}
			else
			{
				printf("Less=%f", x);
			}
		}
		else
		{
			printf("More=%f\n", z);
			if (fabs(x) > fabs(y))
			{
				printf("More=%f", y);
			}
			else
			{
				printf("Less=%f", x);
			}
		}
	}
	
}