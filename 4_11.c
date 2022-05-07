/*Task 4.11*/
#include<stdio.h>
#include<math.h>
int main()
{
	float i = -1,s=0,n=1;
	int k = 0;
	while (i != 0)
	{
		printf("a[%d]=", k);
		scanf_s("%f", &i);
		s = s + i;
		if (i != 0)
		{
			n = n * i;
		}
		k = k + 1;
	}
	printf("aver=%f\n", s / (k-1));
	printf("aver_geom=%f\n", pow(abs(n),1.0/(k-1)));
}