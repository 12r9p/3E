#include <stdio.h>

int main(void){

    int a = 1;
    int b = 2;

    a += 3;
    b *= 4;

    a -= b + 1;

    b *= 5 / a;

    printf("%d, %d\n", a, b);
    
    return 0;
}