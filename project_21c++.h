#include<iostream>

namespace My_Rand
{
	static long long a, c, m, s0, sk;

	void sot(int seed);

	void gen_num();

	long long int random_int1();

	double my_d_uniform1(int a = 0, int b = 1);

	double my_exp(double d);

	double my_normal(double x, double y);

	double Poisson(double rate);

	double my_student(int n);

	double my_fisher(int d1, int d2);
}
