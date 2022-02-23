/*Task 3.7b)*/
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
            if (-c / b < 0)
            {
                printf("K = 0");
            }
            else
            {
                if (-c / b == 0)
                {
                    printf("K = 1\n");
                    printf("x1 = %f", -c / b);
                }
                else
                {
                    printf("K = 2\n");
                    printf("x1= %f, x2= %f", sqrt(-c/b), -sqrt(-c / b));
                }
            }
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
                if (-b / (2 * a) > 0)
                {
                    printf("K = 2\n");
                    printf("x1= %f, x2= %f", sqrt((-b)/ (2 * a)), -sqrt((-b)/(2 * a)));
                }
                else
                {
                    if (-b / (2 * a) == 0)
                    {
                        printf("K = 1\n");
                        printf("x1= %f", sqrt((-b) / (2 * a)));
                    }
                    else
                    {
                        printf("K = 0");
                    }
                }
            }
            else
            {
                if (((-b) + sqrt(d)) / (2 * a) > 0 && ((-b) - sqrt(d)) / (2 * a) > 0)
                {
                    printf("K = 4\n");
                    printf("x1= %f, x2= %f, x3= %f, x4= %f", sqrt((-b + sqrt(d)) / (2 * a)), sqrt((-b - sqrt(d)) / (2 * a)), -sqrt((-b + sqrt(d)) / (2 * a)), -sqrt((-b - sqrt(d)) / (2 * a)));
                }
                else
                {
                    if (((-b) + sqrt(d)) / (2 * a) > 0 && ((-b) - sqrt(d)) / (2 * a) == 0)
                    {
                        printf("K = 3\n");
                        printf("x1= %f, x2= %f, x3= %f", sqrt((-b + sqrt(d)) / (2 * a)), sqrt((-b - sqrt(d)) / (2 * a)), -sqrt((-b + sqrt(d)) / (2 * a)));
                    }
                    else
                    {
                        if (((-b) + sqrt(d)) / (2 * a) == 0 && ((-b) - sqrt(d)) / (2 * a) > 0)
                        {
                            printf("K = 3\n");
                            printf("x1= %f, x2= %f, x3= %f", sqrt((-b + sqrt(d)) / (2 * a)), sqrt((-b - sqrt(d)) / (2 * a)), -sqrt((-b - sqrt(d)) / (2 * a)));
                        }
                        else
                        {
                            if (((-b) + sqrt(d)) / (2 * a) == 0 && ((-b) - sqrt(d)) / (2 * a) == 0 || ((-b) + sqrt(d)) / (2 * a) < 0 && ((-b) - sqrt(d)) / (2 * a) == 0 || ((-b) + sqrt(d)) / (2 * a) == 0 && ((-b) - sqrt(d)) / (2 * a) < 0)
                            {
                                printf("K = 1\n");
                                printf("x1= %f", 0);
                            }
                            else
                            {
                                if (((-b) + sqrt(d)) / (2 * a) > 0 && ((-b) - sqrt(d)) / (2 * a) < 0)
                                {
                                    printf("K = 2\n");
                                    printf("x1= %f, x2= %f", sqrt((-b + sqrt(d)) / (2 * a)), -sqrt((-b + sqrt(d)) / (2 * a)));
                                }
                                else
                                {
                                    if (((-b) + sqrt(d)) / (2 * a) <0 && ((-b) - sqrt(d)) / (2 * a) > 0)
                                    {
                                        printf("K = 2\n");
                                        printf("x1= %f, x2= %f", sqrt((-b - sqrt(d)) / (2 * a)), -sqrt((-b - sqrt(d)) / (2 * a)));
                                    }
                                    else
                                    {
                                        printf("K = 0");
                                    }
                                }
                            }
                        }
                    }
                }
                printf("K = 2\n");
                printf("x1= %f, x2= %f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
            }
        }
    }
}