#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 5;
    char c;

    printf("input character: ");
    scanf(" %c", &c);

    switch (c) {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    default:
        printf("error: input + or -.\n");
        break;
    }

    return 0;
}
