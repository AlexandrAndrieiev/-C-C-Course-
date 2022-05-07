/*Task 5_8*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>


double func_b(double x, double eps) {
    double a, y;
    a = 1.0;
    y = a;
    int k = 1;
    while (fabs(a) > eps) {
        a = a * x / k;
        y += a;
        k = k + 1;
    }

    return y;
}


double func_g(double x, double eps) {
    double a, y;
    a = x;
    y = a;
    int k1 = 1;
    int k2 = 3;
    int k = 1;
    while (fabs(a/k1/k2) > eps) {
        a = a * (-x * x);
        y += a/k1/k2;
        k2 = k2 + 2;
        k1 = k1 * (k + 1) * (k + 2);
        k = k + 2;
    }

    return y;
}

int main() {

    double x, eps;
    double a, y1, y2;
    int k = 0;

    do {
        printf("x(x!=0)=");
        scanf_s("%lf", &x);
    } while (fabs(x) < 0.00001);


    do {
        printf("eps(eps>0)=");
        scanf_s("%lf", &eps);
    } while (eps < 0.00001);


    y1 = func_b(x, eps);
    printf("y1=%lf\n", y1);
    y2 = func_g(x, eps);
    printf("y2=%lf", y2);


}