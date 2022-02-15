/*Task 2.5*/
#include<stdio.h>
#include<math.h>
float Rosenbrock2d(float x, float y)
{
	return 100 * pow((pow(x, 2) - y), 2) + pow((x - 1), 2);
}
int main()
{
	printf("%f\n", Rosenbrock2d(1, 1));
	printf("%f\n", Rosenbrock2d(2, 2));
	printf("%f", Rosenbrock2d(3, 3));
}