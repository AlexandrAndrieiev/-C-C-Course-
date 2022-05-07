/*Task 7_1*/
#include <stdio.h>

#define N 5

int main() {

    int mas[] = { 15, 122, 23, 4, 71 };

    double a;
    printf("a=");
    scanf_s("%lf", &a);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (mas[i] < a) count++;
    }

    printf("K=%d", count);
}