#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;
    char c;

    printf("input character: ");

    scanf(" %c", &c);

    if (c == '+') {
        printf("%d\n", a + b);
    } else if (c == '-') {
        printf("%d\n", a - b);
    } else {
        printf("error: input + or -.\n");
    }

    return 0;
}