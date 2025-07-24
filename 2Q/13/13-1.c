#include <stdio.h>

int main(void)
{
    int i, n, sum;
    char choice;

    sum = 0;
    for (i = 0; i < 10; i++) {
        printf("input integer: ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            i--; // 同じ回数でやり直し
            continue;
        }

        if (n < 0) {
            continue;
        }

        sum += n;

        if (i == 4) {
            printf("Do you want to continue to input? (y/n) ");
            scanf(" %c", &choice);

            if (choice == 'n') {
                break;
            } else if (choice != 'y') {
                printf("Do you want to continue to input? (y/n) ");
                scanf(" %c", &choice);
                while (choice != 'y' && choice != 'n') {
                    printf("Do you want to continue to input? (y/n) ");
                    scanf(" %c", &choice);
                }
                if (choice == 'n') {
                    break;
                }
            }
        }
    }

    printf("sum = %d\n", sum);
    return 0;
}