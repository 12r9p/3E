#include <stdio.h>

int main(void)
{
    int f1, f2, f;

    f1 = 0;
    f2 = 1;
    printf("%d, %d", f1, f2);

    f = f1 + f2;
    while (f < 1000) {
        printf(", %d", f);

        f1 = f2;
        f2 = f;

        f = f1 + f2;
    }

    printf("\n");
    return 0;
}