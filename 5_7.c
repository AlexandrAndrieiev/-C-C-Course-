/*Task 5_7*/
#include<stdio.h>
int main() {
    unsigned n;
    printf("n = ");
    scanf_s("%d", &n);
    double a1 = 1, a2 = 0, b1 = 0, b2 = 1, b0, a0, sum = 0, s=2.0;
    sum += s / (a2 + b2);
    s = s * 2;
    sum+= s / (a1 + b1);
    s = s * 2;
    for (int k = 3; k <= n; k++) {
        b0 = b1 + a1;
        a0 = a1 / k + a2 * b0;
        sum += s / (a0 + b0);
        a2 = a1;
        a1 = a0;
        b2 = b1;
        b1 = b0;
        s = s * 2;
    }
    printf("S(n) = %lf", sum);
}