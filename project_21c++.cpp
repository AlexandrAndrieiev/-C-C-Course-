#include <iostream>
#include<math.h>
#include"project_21c++.h"

m = 1073741824;

s0 = 1;

void sot(int seed)
{
	s0 = seed % m;
}
void gen_num()
{
	a = (int)sqrt(m);
	a = a + (5 - a % 8);
	c = (int)(m * (0.5 - sqrt(3) / 6));
	if (c % 2 == 0)
		c = c + 1;
}

long long int random_int1()
{
	gen_num();
	sk = (a * s0 + c) % m;
	s0 = sk;
	return sk;
}

double my_d_uniform1(int a = 0, int b = 1)
{
	return a + (b - a) * (random_int1() + 1) / double(m + 1);
}

double my_exp(double d)
{
//	std::cout << "Exp_distribution("<<d<<")="<< -log(d_uniform1()) / d << "\n";
	return -log(d_uniform1()) / d;
}

double my_normal(double x, double y)
{
	double s = 0;
	double v, u, z;
	while (s == 0 || s > 1)
	{
		u = d_uniform1(-1, 1);
		v = d_uniform1(-1, 1);
		s = u * u + v * v;
	}
	z = u * sqrt((-2 * log(s)) / s);
//	std::cout << "Normal_distribution("<<x<<", "<<y<<")=" << x + y * z << "\n";
	return x + y * z;
}

double Poisson(double rate) {
	int k = -1;
	double s = 0;
	do {
		s += my_exp(1);
		++k;
	} while (s < rate);
//	std::cout << "Poisson_distribution(" << rate << ")=" << k << "\n";
	return k;
}


double my_student(int n)
{
	double k0, s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			k0 = my_normal(0, 1);
		}
		else
		{
			s = s + pow(my_normal(0, 1), 2);
		}
	}
//	std::cout << "Student_distribution(" << n << ")=" << k0 / sqrt(s / n) << "\n";
	return k0 / sqrt(s / n);
}


double my_fisher(int d1, int d2)
{
	double s1 = 0, s2 = 0;
	for (int i = 0; i < d1; i++)
	{
		s1 = s1 + pow(my_normal(0, 1), 2);
	}
	for (int i = 0; i < d2; i++)
	{
		s2 = s2 + pow(my_normal(0, 1), 2);
	}
	std::cout << "Fisher_distribution(" << d1 << ", " << d2 << ")=" << (s1 / d1) / (s2 / d2) << "\n";
	return (s1 / d1) / (s2 / d2);
}