#include<stdio.h>
#include"project_21c.h"

int main()
{
	/*Тест №1
Отримайте цим датчиком 1000 чисел та оцінить рівномірність
розподілу: розбийте інтервал (0, 1) на N інтервалів рівної довжини та
знайдіть варіацію серед чисел, що туди потрапили.*/
	printf("Print N: ");
	int n;
	scanf_s("%d", &n);
	double var = 0;
	for (int i = 0; i < 1000; i++)
	{
		double d1 = my_d_uniform1(0, 1);
		var = var + ((double)((int)(d1 * n))) / n + 1.0 / (2 * n) - d1;
	}
	printf("Var: %lf\n", var);


	/*Тест №2
	В тестовий програмі перевірте зокрема коректність ГВЧ за
	критерієм Хі-квадрат.*/
	int k = 50;
	int mas[50];
	for (int i = 0; i < 50; i++)
	{
		mas[i] = 0;
	}
	for (int i = 0; i < 1000; i++)
	{
		double d2 = my_d_uniform1(0, 1);
		++mas[(int)(d2 * 50)];
	}
	double ksi = 0;
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		s = s + mas[i];
		ksi = ksi + 1000 * ((pow((mas[i] / 1000.0 - 1.0 / k), 2)) / (1.0 / k));
	}
	printf("ksi: %lf\n", ksi);



	/*Тест №3
	Розподіл Пуассона*/
	printf("Print parametrs(1): ");
	double rate;
	scanf_s("%lf", &rate);
	int p[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 10000; ++i) {
		int number = Poisson(rate);
		if (number < 10) ++p[number];
	}

	printf("poisson_distribution(%lf):\n", rate);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d: ", i);
		for (int j = 0; j < p[i] * 100 / 10000; j++)
		{
			printf("*");
		}
		printf("\n: ");
	}



	/*Тест №4
	Розподіл Гаусса*/
	printf("Print parametrs(2): ");
	double x, y;
	scanf_s("%lf %lf", &x, &y);
	int p1[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10000; ++i) {
		double number1 = my_normal(x, y);
		if ((number1 >= 0.0) && (number1 < 10.0)) ++p1[(int)(number1)];
	}
	printf("normal_distribution(%lf, %lf):\n", x, y);

	for (int i = 0; i < 10; ++i) {
		printf("%d-%d: ", i, i + 1);
		for (int j = 0; j < p1[i] * 100 / 10000; j++)
		{
			printf("*");
		}
		printf("\n: ");
	}


	/*Тест №5
	Експоненційний розподіл*/
	printf("Print parametrs(1): ");
	double d;
	scanf_s("%lf", &d);
	int p2[10] = { 0,0,0,0,0,0,0,0,0,0 };
	const int nintervals = 10;
	for (int i = 0; i < 10000; ++i) {
		double number2 = my_exp(d);
		if (number2 < 1.0)
		{
			++p2[(int)(nintervals * number2)];
		}
	}


	printf("Exp_distribution(%lf):\n", d);

	for (int i = 0; i < nintervals; ++i) {
		printf("%lf-%lf: ", (double)(i) / nintervals, (double)(i + 1) / nintervals);
		for (int j = 0; j < p2[i] * 100 / 10000; j++)
		{
			printf("*");
		}
		printf("\n: ");
	}


	/*Тест №6
	Розподіл Стьюдента*/
	printf("Print parametrs(1): ");
	int nn;
	scanf_s("%d", &nn);
	const int nintervals1 = 12;
	const double first = -3.0;
	const double span = 0.5;
	int p3[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10000; ++i) {
		double number3 = my_student(nn);
		if ((number3 >= first) && (number3 < first + nintervals1 * span))
			++p3[(int)((number3 - first) / span)];
	}

	printf("Student_distribution(%d):\n", nn);

	for (int i = 0; i < nintervals1; ++i) {
		printf("%lf..%lf:  ", first + i * span, first + (i + 1) * span);
		for (int j = 0; j < p3[i] * 100 / 10000; j++)
		{
			printf("*");
		}
		printf("\n: ");
	}



	/*Тест №7
	Розподіл Фішера*/
	printf("Print parametrs(2): ");
	int d11, d22;
	scanf_s("%d %d", &d11, &d22);
	int p4[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10000; ++i) {
		double number4 = my_fisher(d11, d22);
		if ((number4 >= 0.0) && (number4 < 10.0)) ++p4[(int)(number4)];
	}

	printf("Fisher_distribution(%d, %d):\n", d11, d22);

	for (int i = 0; i < 10; ++i) {
		printf("%d-%d: ", i, i + 1);
		for (int j = 0; j < p4[i] * 100 / 10000; j++)
		{
			printf("*");
		}
		printf("\n: ");
	}



}