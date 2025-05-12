#include <stdio.h>

int main(void)
{
    const char *word = "HELLO";   /* 出力したい文字列          */

    for (int i = 0; word[i] != '\0'; ++i) {
        printf("%*c\n", i + 1, word[i]);
    }

    printf("\n");

    return 0;
}