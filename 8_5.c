/*Task 8_5*/

#include <stdio.h>

#define N 20
#define M 20


void vyvod(const int matr[N][M], unsigned n, unsigned m) {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d, ", matr[i][j]);
        }
        printf("\n");
    }

}

void transp(int matr[N][N], unsigned n) {

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            // i,j -> j,i; j,i -> i,j 
            double tmp = matr[i][j];
            matr[i][j] = matr[j][i];
            matr[j][i] = tmp;
        }
    }

}

int vvod1(int matr[N][M], unsigned n, unsigned m) {

    for (unsigned i = 0; i < n; ++i) {
        for (unsigned j = 0; j < m; ++j) {
            printf("\na[%u][%u]=", i, j);
            scanf_s("%d", &matr[i][j]);
        }
    }

}


int main() {

    int matr[N][M];


    int n;
    printf("N:");
    scanf_s("%d", &n);

    vvod1(matr, n, n);
    transp(matr, n);
    vyvod(matr, n, n);


}