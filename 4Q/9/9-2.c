#include <stdio.h>
#define n 11
int main(void)
{
    int i;
    char str[n];
    char *p, *q;
    printf("Input string: ");
    scanf("%s", str);
    p = str;
    q = str;

//回文判定
    while (*q != '\0') {
        q++;
    }
    q--;
    while (p < q) {
        if (*p != *q) {
            break;
        }
        p++;
        q--;
    }

    if (p < q)
        printf("%s is not palindrome.\n", str);
    else
        printf("%s is palindrome.\n", str);
    return 0;
}