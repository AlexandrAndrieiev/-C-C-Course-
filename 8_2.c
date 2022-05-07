/*Task 8_2*/
#include <stdio.h>

#define N 3


void vyvod(double matr[N][N]) {

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%lf, ", matr[i][j]);
        }
        printf("\n");
    }

}


int mute(double matr[N][N], unsigned n1, unsigned m1, double a) {

    if (n1 >= N || m1 >= N) {
        printf("Indexes wrong\n");
        return -1;
    }

    matr[n1][m1] = a;
    return 0;
}

int main() {

    double matr[N][N] = {
                   {1,2,3,},
                   {4,5,6},
                   {7,8,9}
    };



    vyvod(matr);

    unsigned n1, m1;
    printf("I, J:");
    scanf_s("%u", &n1);
    scanf_s("%u", &m1);

    double a;
    printf("a=");
    scanf_s("%lf", &a);


    mute(matr, n1, m1, a);
    vyvod(matr);

}