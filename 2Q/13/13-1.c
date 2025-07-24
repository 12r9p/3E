#include <stdio.h>

int main(void)
{
    int i, n, sum;
    int choice;

    sum = 0;
    for (i = 0; i < 10; i++) {
        printf("input integer: ");
        scanf("%d", &n);

        if (n < 0) {
            continue;
        }

        sum += n;

        if (i == 4) {
            printf("Do you want to continue to input? (No:0/Yes:other) ");
            scanf("%d", &choice);

            if (choice == 0) {
                break;
            }
        }
    }

    printf("sum = %d\n", sum);
    return 0;
}