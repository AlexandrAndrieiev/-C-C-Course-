/*Task 8_4*/

#include <stdio.h>

#define N 25
#define M 25


void vyvod(double matr[N][M], unsigned n, unsigned m) {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%lf, ", matr[i][j]);
        }
        printf("\n");
    }

}


int vvod2(double matr[N][M], unsigned n, unsigned m) {

    for (unsigned i = 0; i < n; ++i) {
        for (unsigned j = 0; j < m; ++j) {
            scanf_s(" %lf", &matr[i][j]);
        }
    }
    return 0;
}


int main() {

    double matr[N][M];


    int n, m;
    printf("N, M:");
    scanf_s("%d", &n);
    scanf_s("%d", &m);

    vvod2(matr, n, m);
    vyvod(matr, n, m);

}