#include<iostream>
#include<random>
#include"project_21c++.h"

int main()
{
	/*Тест №1
Отримайте цим датчиком 1000 чисел та оцінить рівномірність
розподілу: розбийте інтервал (0, 1) на N інтервалів рівної довжини та
знайдіть варіацію серед чисел, що туди потрапили.*/
	std::cout << "Print N: ";
	int n;
	std::cin >> n;
	double var = 0;
	for (int i = 0; i < 1000; i++)
	{
		double d1 = my_d_uniform1();
		var = var + (double(int(d1 * n)) / n + 1.0 / (2 * n) - d1);
	}
	std::cout << "Var: " << var << "\n";

	/*Тест №2
	В тестовий програмі перевірте зокрема коректність ГВЧ за
	критерієм Хі-квадрат.*/
	int k = 50;
	int mas[50]{ 0 };
	for (int i = 0; i < 1000; i++)
	{
		double d2 = my_d_uniform1();
		++mas[int(d2 * 50)];
	}
	double ksi = 0;
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		s = s + mas[i];
		ksi = ksi + 1000 * ((pow((mas[i] / 1000.0 - 1.0 / k), 2)) / (1.0 / k));
	}
	std::cout << "ksi: " << ksi << "\n";
	/*Тест №3
	Розподіл Пуассона*/
	std::cout << "Print parametrs(1): ";
	double rate;
	std::cin >> rate;
	int p[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 10000; ++i) {
		int number = Poisson(rate);
		if (number < 10) ++p[number];
	}

	std::cout << "poisson_distribution(" << rate << "):" << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << i << ": " << std::string(p[i] * 100 / 10000, '*') << std::endl;

	//module <random> c++
	int p0[10] = { 0,0,0,0,0,0,0,0,0,0 };
	std::default_random_engine generator;
	std::poisson_distribution<int> distribution(rate);

	for (int i = 0; i < 10000; ++i) {
		int number = distribution(generator);
		if (number < 10) ++p0[number];
	}

	std::cout << "poisson_distribution_c++(" << rate << "):" << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << i << ": " << std::string(p0[i] * 100 / 10000, '*') << std::endl;


	/*Тест №4
	Розподіл Гаусса*/
	std::cout << "Print parametrs(2): ";
	double x, y;
	std::cin >> x >> y;
	int p1[10]{ 0 };
	for (int i = 0; i < 10000; ++i) {
		double number1 = my_normal(x, y);
		if ((number1 >= 0.0) && (number1 < 10.0)) ++p1[int(number1)];
	}

	std::cout << "normal_distribution(" << x << ", " << y << "):" << std::endl;

	for (int i = 0; i < 10; ++i) {
		std::cout << i << "-" << (i + 1) << ": ";
		std::cout << std::string(p1[i] * 100 / 10000, '*') << std::endl;
	}
	//module <random> c++
	std::normal_distribution<double> distribution1(x, y);
	int p11[10]{ 0 };
	for (int i = 0; i < 10000; ++i) {
		double number11 = distribution1(generator);
		if ((number11 >= 0.0) && (number11 < 10.0)) ++p11[int(number11)];
	}

	std::cout << "normal_distribution_c++(" << x << ", " << y << "):" << std::endl;

	for (int i = 0; i < 10; ++i) {
		std::cout << i << "-" << (i + 1) << ": ";
		std::cout << std::string(p11[i] * 100 / 10000, '*') << std::endl;
	}
	/*Тест №5
	Експоненційний розподіл*/
	std::cout << "Print parametrs(1): ";
	double d;
	std::cin >> d;
	int p2[10] = { 0,0,0,0,0,0,0,0,0,0 };
	const int nintervals = 10;
	for (int i = 0; i < 10000; ++i) {
		double number2 = my_exp(d);
		if (number2 < 1.0)
		{
			++p2[int(nintervals * number2)];
		}
	}

	std::cout << "Exp_distribution(" << d << "):" << "\n";
	std::cout << std::fixed; std::cout.precision(1);

	for (int i = 0; i < nintervals; ++i) {
		std::cout << float(i) / nintervals << "-" << float(i + 1) / nintervals << ": ";
		std::cout << std::string(p2[i] * 100 / 10000, '*') << std::endl;
	}

	//module <random> c++
	int p22[10] = { 0,0,0,0,0,0,0,0,0,0 };
	std::exponential_distribution<double> distribution2(d);
	for (int i = 0; i < 10000; ++i) {
		double number22 = distribution2(generator);
		if (number22 < 1.0) ++p22[int(nintervals * number22)];
	}

	std::cout << "Exp_distribution_с++(" << d << "):" << "\n";
	std::cout << std::fixed; std::cout.precision(1);

	for (int i = 0; i < nintervals; ++i) {
		std::cout << float(i) / nintervals << "-" << float(i + 1) / nintervals << ": ";
		std::cout << std::string(p22[i] * 100 / 10000, '*') << std::endl;
	}

	/*Тест №6
	Розподіл Стьюдента*/
	std::cout << "Print parametrs(1): ";
	int nn;
	std::cin >> nn;
	const int nintervals1 = 12;
	const double first = -3.0;
	const double span = 0.5;
	int p3[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10000; ++i) {
		double number3 = my_student(nn);
		if ((number3 >= first) && (number3 < first + nintervals1 * span))
			++p3[int((number3 - first) / span)];
	}

	std::cout << "Student_distribution(" << nn << "):" << "\n";
	std::cout << std::fixed; std::cout.precision(1);

	for (int i = 0; i < nintervals1; ++i) {
		std::cout.width(4); std::cout << (first + i * span) << "..";
		std::cout.width(4); std::cout << (first + (i + 1) * span) << ": ";
		std::cout << std::string(p3[i] * 100 / 10000, '*') << std::endl;
	}


	//module <random> c++
	int p33[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	std::student_t_distribution<double> distribution3(nn);
	for (int i = 0; i < 10000; ++i) {
		double number33 = distribution3(generator);
		if ((number33 >= first) && (number33 < first + nintervals1 * span))
			++p33[int((number33 - first) / span)];
	}

	std::cout << "Student_distribution_c++(" << nn << "):" << "\n";
	std::cout << std::fixed; std::cout.precision(1);

	for (int i = 0; i < nintervals1; ++i) {
		std::cout.width(4); std::cout << (first + i * span) << "..";
		std::cout.width(4); std::cout << (first + (i + 1) * span) << ": ";
		std::cout << std::string(p33[i] * 100 / 10000, '*') << std::endl;
	}


	/*Тест №7
	Розподіл Фішера*/
	std::cout << "Print parametrs(2): ";
	int d11, d22;
	std::cin >> d11 >> d22;
	int p4[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 10000; ++i) {
		double number4 = my_fisher(d11, d22);
		if ((number4 >= 0.0) && (number4 < 10.0)) ++p4[int(number4)];
	}

	std::cout << "Fisher_distribution(" << d11 << ", " << d22 << ")=" << "\n";
	std::cout << std::fixed; std::cout.precision(1);

	for (int i = 0; i < 10; ++i) {
		std::cout << i << "-" << (i + 1) << ": ";
		std::cout << std::string(p4[i] * 100 / 10000, '*') << std::endl;
	}

	//module <random> c++
	int p44[10] = { 0,0,0,0,0,0,0,0,0,0 };
	std::fisher_f_distribution<double> distribution4(d11, d22);
	for (int i = 0; i < 10000; ++i) {
		double number44 = distribution4(generator);
		if ((number44 >= 0.0) && (number44 < 10.0)) ++p44[int(number44)];
	}

	std::cout << "Fisher_distribution_c++(" << d11 << ", " << d22 << ")=" << "\n";
	std::cout << std::fixed; std::cout.precision(1);

	for (int i = 0; i < 10; ++i) {
		std::cout << i << "-" << (i + 1) << ": ";
		std::cout << std::string(p44[i] * 100 / 10000, '*') << std::endl;
	}

}
