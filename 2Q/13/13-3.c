#include <stdio.h>

int main(void)
{
    int a, b, c, sum;

    for (a = 1; a <= 6; a++) {
        for (b = 1; b <= 6; b++) {
            for (c = 1; c <= 6; c++) {

                sum = a + b + c;

                if (sum >= 5 && sum <= 7) {

                    printf("%d + %d + %d = %d\n", a, b, c, sum);
                }
            }
        }
    }

    return 0;
}