#include <stdio.h>
#define n 11

void printstr(char *);
void inv_printstr(char *);

int main(void)
{
    int i;
    char str[n];

    printf("Input string: ");
    scanf("%s", str);

    printstr(&str[0]);
    inv_printstr(&str[0]);

    return 0;
}

void printstr(char *p)
{
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");
}
void inv_printstr(char *p)
{
    char *q = p;

    while (*q != '\0') {
        q++;
    }
    q--;
    while (q >= p) {
        printf("%c", *q);
        q--;
    }
    printf("\n");
}