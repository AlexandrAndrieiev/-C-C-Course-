/*Task 8_6*/

#include <stdio.h>

#define N 100
#define M 100


void vyvod(double matr[N][M], unsigned n, unsigned m) {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%lf, ", matr[i][j]);
        }
        printf("\n");
    }

}


int vvod1(double matr[N][M], unsigned n, unsigned m) {

    for (unsigned i = 0; i < n; ++i) {
        for (unsigned j = 0; j < m; ++j) {
            printf("\na[%u][%u]=", i, j);
            scanf_s("%lf", &matr[i][j]);
        }
    }
    return 0;
}


double diff(double matr[N][M], int n, int m, int k) {
    double sum = 0;
    for (unsigned i = 0; i < n; ++i) {
        for (unsigned j = 0; j < m; ++j) {
            if (i - j == k) sum += matr[i][j];
        }
    }

    return sum;
}

int main() {

    double matr[N][M];


    int n, m;
    printf("N, M:");
    scanf_s("%d", &n);
    scanf_s("%d", &m);

    vvod1(matr, n, m);
    vyvod(matr, n, m);

    int i, j, k;
    printf("k=");
    scanf_s("%d", &k);

    printf("S=%lf", diff(matr, n, m, k));
}