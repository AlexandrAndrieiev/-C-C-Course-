/*Task 5_6*/
#include <stdio.h>

double seq_frac_a(double b, long long int n) {
    double res = b;
    for (long long int i = 0; i < n; ++i) {
        res = b + 1 / res;
    }

    return res;
}


double seq_frac_b(long long int n) {
    double res = 4.0*n+2;
    for (long long int i = n-1; i >-1; i--) {
        res = 4*i+2 + 1 / res;
    }

    return res;
}



int main() {
    long long int n;
    printf("n=");
    scanf_s("%I64d", &n);
    double b;
    printf("b=");
    scanf_s("%lf", &b);
    printf("b=%lf\n", seq_frac_a(b, n));
    printf("l=%lf\n", seq_frac_b(n));
}