/*Task 5_3*/
#include <stdio.h>
int main() {
    unsigned n, nmax, nn;
    nmax = 0;
    for (n = 1; n < 1000; n++) {
        unsigned a0 = n;
        unsigned a1 = a0;
        int k = 0;
        while (a1 != 1) {
            if (a0 % 2) {
                a1 = 3 * a0 + 1;
            }  
            else {
                a1 = a0 / 2;
            }
            a0 = a1;
            k++;
        }
        if (k > nmax) {
            nmax = k;
            nn = n;
        }
    }

    printf("max k=%u for n=%u", nmax, nn);
}