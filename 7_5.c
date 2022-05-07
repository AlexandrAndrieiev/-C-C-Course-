/*Task 7_5*/
#include <stdio.h>


#define N 50

int printOdds(unsigned mas[], size_t size) {

    unsigned  sum1 = 0, sum2 = 0;

    for (int i = 0; i < size; i++) {
        if (mas[i] % 2==0) {
            sum2 += mas[i];
            printf("%d\n", sum2);
        }
        else {
            sum1 += mas[i];
        }
    }

    printf("Sum of odds - %u sum of evens - %u", sum1, sum2);
    return 0;
}


int main() {

    unsigned mas[N];
    int i = -1, k = 0;
    while (i != 0 && k < N)
    {
        printf("mas[%d]=", k);
        scanf_s("%u", &mas[k]);
        i = mas[k];
        k = k + 1;
    }

    printOdds(mas, k-1);

}