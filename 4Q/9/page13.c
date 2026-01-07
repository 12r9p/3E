# include <stdio.h>

int main(void) {
    int i;
    char str[4] = "abc";
    int n[3] = {100, 200, 300};

    printf("str = %p\n", str);
    printf("str[] = %s\n",str);

    for (i = 0; str[i] != '\0'; i++){
        printf("str[%d] = %c, address = %p\n", i, str[i], &str[i]);
    }

    printf("n = %p\n", n);
    printf("n[] = %s\n", n);
    for (i = 0; i < sizeof(n) / sizeof(n[0]); i++){
        printf("n[%d] = %d, address = %p\n", i, n[i], &n[i]);
    }
}