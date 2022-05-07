/*Task 8_1*/
#include <stdio.h>

#define N 3


void vyvod(const int matr[N][N]) {

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d, ", matr[i][j]);
        }
        printf("\n");
    }

}


void change(int matr[N][N], int n1, int m1) {

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matr[i][j] == n1) {
                matr[i][j] = m1;
            }
        }
    }
}

int main() {

    int matr[N][N] = {
                   {1,2,3,},
                   {4,5,6},
                   {7,8,9}
    };

    vyvod(matr);

    int n1, m1;
    printf("N, M:");
    scanf_s("%d", &n1);
    scanf_s("%d", &m1);

    change(matr, n1, m1);
    vyvod(matr);

}