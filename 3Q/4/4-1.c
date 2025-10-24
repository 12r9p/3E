# include <stdio.h>

int main(void) {
    int l, m;
    int h1[2][3];
    int h2[2][3];

    // input
    for (l = 0; l < 2; l++) {
        for (m = 0; m < 3; m++) {
            printf("h1[%d][%d] = ", l, m);
            scanf("%d", &h1[l][m]);
        }
    }
    for (l = 0; l < 2; l++) {
        for (m = 0; m < 3; m++) {
            printf("h2[%d][%d] = ", l, m);
            scanf("%d", &h2[l][m]);
        }
    }

    // calculate and output
    printf("h1 + h2 is ... \n");
    for (l = 0; l < 2; l++) {
        for (m = 0; m < 3; m++) {
            printf("%d ", h1[l][m] + h2[l][m]);
        }
        printf("\n");
    }
    return 0;
}

