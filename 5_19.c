/*Task 5_19*/
#include <stdio.h>
#include <math.h>


double halb_cut(double a, double b, double eps) {

    if (b - a < eps) return (a + b) / 2;

    double z = (a + b) / 2;

    if (tan(z) - z < 0) return halb_cut(z, b, eps);
    else return halb_cut(a, z, eps);

}


int main() {

    double a = 0.001, b = 1.5;
    double x, eps;


    do {
        printf("Input real eps>0:");
        scanf_s("%lf", &eps);
    } while (eps <= 0);


    x = halb_cut(a, b, eps);  

    printf("x=%lf", x);
}