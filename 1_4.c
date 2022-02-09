/*Task 1.4*/
#include<stdio.h>
#include<math.h>
int main()
{
	float m1, m2, r;
	m1 = 5;
	m2 = 2;
	r = 3.5;
	float F;
	F = 6.673 * pow(10, -11) * (m1 + m2) / (r * r);
	printf("F=%e", F);
}