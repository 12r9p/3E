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
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}