#include <stdio.h>

int main(void)
{
    int a = 7, b = 13, c;

    ++a;
    --b;

    c = a + b++;

    printf("%d, %d, %d\n", a, b, c);

    return 0;
}