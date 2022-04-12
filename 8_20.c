/*Task 8_20*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    int **a;
    int i, j, n, m,k;
    system("chcp 1251");
    system("cls");
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    a = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(m * sizeof(int));
        for (j = 0; j < m; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d ", a[i][j]); 
        }
        printf("\n");
    }
    int temp;
    for (int p = 1; p <= k; p++)
    {
        for (int h = 0; h < n; h++)
        {
            temp = a[h][m-1];
            for (int f = m - 1; f > 0; f--)
                a[h][f] = a[h][f-1];
            a[h][0] = temp;
        }
    }
    printf("\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%5d ", a[i][j]); 
        }
        printf("\n");
    }
}