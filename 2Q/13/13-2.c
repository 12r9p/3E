#include <stdio.h>

int main(void)
{
    const int size = 10;
    int x, y;

    for (y = 1; y <= size; y++) {

        for (x = 1; x <= size; x++) {

            if (x == y || x + y == size + 1) {
                printf("*");
            } else {
                printf(" ");
            }
            if (x == (y > size + 1 - y ? y : size + 1 - y)){
                break;
            }
        }
        printf("\n");
    }

    return 0;
}