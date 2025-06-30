# include <stdio.h>

int main(void){

    int n;
    printf("Input intger: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("¥");
    }
    printf("\n");

    return 0;
}