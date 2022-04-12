/*Task 5_18*/
#include<stdio.h>
int outnum(unsigned long long n) {
    unsigned long long val;
    int str[5];
    if (n < 10)return n;
    if (n < 190) {
        val = (n - 10) / 2 + 10;
        str[0] = val % 10; val /= 10;
        str[1] = val;
        return str[1 - n % 2];
    }
    if (n < 2890) {
        val = (n - 190) / 3 + 100;
        str[0] = val % 10; val /= 10;
        str[1] = val % 10; val /= 10;
        str[2] = val;
        return str[2 - ((n - 190) % 3)];
    }
    if (n < 38889) {
        val = (n - 2890) / 4 + 1000;
        str[0] = val % 10; val /= 10;
        str[1] = val % 10; val /= 10;
        str[2] = val % 10; val /= 10;
        str[3] = val;
        return str[3 - ((n - 2890) % 4)];
    }
    {
        val = (n - 38889) / 5 + 10000;
        str[0] = val % 10; val /= 10;
        str[1] = val % 10; val /= 10;
        str[2] = val % 10; val /= 10;
        str[3] = val % 10; val /= 10;
        str[4] = val;
        return str[4 - ((n - 38889) % 5)];
    }
}
int main()
{
    int k;
    scanf_s("%d", &k);
    printf("%d", outnum(k));
}