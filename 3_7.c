/*Task 3.7a)*/
#include <stdio.h>
#include <math.h>
main()
{
    float a, b, c; //K-кількість коренів
    scanf_s("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("K = infinity");
            }
            else
            {
                printf("K = 0");
            }
        }
        else
        {   
            printf("K = 1\n");
            printf("x1 = %f", -c / b);
        }
    }
    else
    {
        float d;
        d = b * b - 4 * a * c;
        if (d < 0)
        {
            printf("K = 0");
        }
        else
        {
            if (d == 0)
            {
                printf("K = 1\n");
                printf("x1 = %f", -b / (2 * a));
            }
            else
            {
                printf("K = 2\n");
                printf("x1= %f, x2= %f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
            }
        }
    }
}