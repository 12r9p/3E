# include <stdio.h>

int main(void) {
    int x;
    int *p;

    printf("input integer: ");
    scanf("%d", &x);

    p = &x;

    printf("x = %d\n", x);
    printf("p = %d\n", *p);
    printf("&x = %p\n", &x);
    printf("p = %p\n", p);

    return 0;
}