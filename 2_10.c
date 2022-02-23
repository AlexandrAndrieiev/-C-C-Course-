/*Task 2.10*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x, y, z,Xr,Yr,Zr;
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	scanf_s("%f", &z);
	Xr = acos(((y * y + z * z - x * x) / (2 * y * z)));
	Yr = acos((x * x + z * z - y * y) / (2 * x * z));
	Zr = acos((y * y + x * x - z * z) / (2 * y * x));
	printf("Xr=%f\n", Xr);
	printf("Yr=%f\n", Yr);
	printf("Zr=%f\n", Zr);
	printf("X=%f\n", Xr/ acos(-1) * 180);
	printf("Y=%f\n", Yr/ acos(-1) * 180);
	printf("Z=%f\n", Zr/ acos(-1) * 180);
}