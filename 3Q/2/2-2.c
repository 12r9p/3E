#include <stdio.h>

int sum(int);

int main(void)
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Sum from 1 to %d is %d.\n", n, sum(n));
    return 0;
}

int sum(int n)
{
    int total = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        total = total + i;
    }

    return total;
}
