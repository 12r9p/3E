#include <stdio.h>

int main(void) {

    int month;
    printf("Input a month: ");
    scanf("%d", &month);

    switch (month) {
        case 3: case 4: case 5:
            printf("spring\n");
            break;
        case 6: case 7: case 8:
            printf("summer\n");
            break;
        case 9: case 10: case 11:
            printf("Autumn\n");
            break;
        case 12: case 1: case 2:
            printf("winter\n");
            break;
        default:
            printf("%d is not a number of month\n", month);
    }

    return 0;
}