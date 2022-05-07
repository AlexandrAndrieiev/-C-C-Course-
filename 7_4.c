/*Task 7_4*/
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#define N 5

int max_arr(int mas[], int size) {

    int max_mas = mas[0];

    for (int i = 1; i < size; i++) {
        if (mas[i] > max_mas) {
            max_mas = mas[i];
        }
    }

    return max_mas;
}


void showArray(int arr[], unsigned n) {
    for (unsigned i = 0; i < n; i++) {
        printf("a[%d]=%d \t", i, arr[i]);
    }
}

bool inputArray(int* arr, int n) {

    for (int i = 0; i < n; ++i) {
        printf("a[%d]=", i);
        scanf_s("%d", &arr[i]);
    }
    return true;
}

int main() {

    int mas[N];

    inputArray(mas, N);

    showArray(mas, N);

    printf("Max =%d", max_arr(mas, N));
}