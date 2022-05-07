/*Task 5_5*/
#include <stdio.h>
int f_pos() { //first positive
    int x0 = -99, x1 = -99, x2 = -99, xn;
    //if(k<=2) return -99;
    int k = 3;
    //for(int i=3;i<k;++i){
    while (x2 <= 0) {
        xn = x2 + x0 + 100;
        x0 = x1;
        x1 = x2;
        x2 = xn;
        k++;
    }
    return x2;
}



int ind() {  /// index of first positive
    int x0 = -99, x1 = -99, x2 = -99, xn;
    //if(k<=2) return -99;
    int k = 3;
    //for(int i=3;i<k;++i){
    while (x2 <= 0) {
        xn = x2 + x0 + 100;
        x0 = x1;
        x1 = x2;
        x2 = xn;
        k++;
    }
    return k;
}

int main() {
    printf("xn=%d\n", f_pos());
    printf("k=%d\n", ind());
}