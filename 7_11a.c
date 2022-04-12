/*Task 7_11a*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MaxLength   256
int main()
{
    int k, i, j, NotBegin = 0;
    double x,s=0;
    long long int Tcurr[MaxLength + 1], Tprev[MaxLength + 1];
    printf("Enter number k: ");
    scanf_s("%d", &k);
    scanf_s("%lf", &x);
    for (i = 0; i <= MaxLength; i++)
    {
        Tprev[i] = Tcurr[i] = 0;
    }
    Tprev[0] = 1; // T[0] = 1.
    Tcurr[1] = 1; // Ò[1] = X.
    for (i = 2; i <= k; i++)
    {
        long long int buffer[MaxLength + 1];
        for (j = 0; j <= MaxLength; j++)
        {
            buffer[j] = Tcurr[j];
        }
        for (j = MaxLength; j > 0; j--)
        {
            Tcurr[j] = Tcurr[j - 1] * 2;
        }
        Tcurr[0] = 0;
        for (j = 0; j <= MaxLength; j++)
        {
            Tcurr[j] -= Tprev[j];
        }
        for (j = 0; j <= MaxLength; j++)
        {
            Tprev[j] = buffer[j];
        }
    }
    for (i = MaxLength; i >= 0; i--)
    {
        if (Tcurr[i])
        {
            if (Tcurr[i] > 0 && NotBegin)
                printf("+");
            printf("%I64d", Tcurr[i]);
            if (i)
                printf("x^%d", i);
            s = s + Tcurr[i]*pow(x, i);
            NotBegin = 1;
        }
    }
    printf("\n");
    printf("S=%f", s);
    return 0;
}