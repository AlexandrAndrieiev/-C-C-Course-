/*Task 2.6*/
#include<stdio.h>
#include<math.h>
float Len(float x1, float x2, float y1, float y2)
{
	return sqrt(pow(y1 - x1, 2) + pow(y2 - x2, 2));
}
float S(float x, float y, float z)
{
	float p = (x + y + z) / 2;
	return sqrt(p * (p - x) * (p - y) * (p - z));
}
int main()
{
	float a1,a2,b1,b2,c1,c2,a,b,c;
	scanf_s("%f %f", &a1, &a2);
	scanf_s("%f %f", &b1, &b2);
	scanf_s("%f %f", &c1, &c2);
	a = Len(b1, b2, c1, c2);
	b = Len(a1, a2, c1, c2);
	c = Len(a1, a2, b1, b2);
	printf("S=%f", S(a, b, c));
}