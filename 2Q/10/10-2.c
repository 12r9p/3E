#include <stdio.h>

int main(void)
{
    int a;
    printf("input integer: ");
    scanf("%d", &a);
    switch (a % 2) {
        case 0:
            printf("even\n");
            break;
        default:
            printf("odd\n");
            break;
    }

    return 0;
}