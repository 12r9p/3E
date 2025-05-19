#include <stdio.h>

int main(void)
{
    int a = 5, b = 9;
    double c;

    c = (double)a / (double)b - 2 / ((double)7 / (double)3);
    printf("%f\n", c);

    return 0;
}