#include <stdio.h>

int main(void)
{
    int n;
    long long f;

    printf("input integer: ");
    scanf("%d", &n);

    for (f = 1; n > 0; n--) {
        f *= n;
    }

    printf("factorial = %lld\n", f);

    return 0;
}