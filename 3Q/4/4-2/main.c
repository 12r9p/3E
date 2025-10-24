# include <stdio.h>

void seki(int h1[2][3], int h2[3][2]);
int ans[2][2];

int main(void) {
    int l, m;
    int h1[2][3] = {{1,2,3},{3,2,1}};
    int h2[3][2] = {{1,2},{3,4},{5,6}};

    // calculate
    seki(h1, h2);

    // output
    printf("h1 * h2 is ... \n");
    for (l = 0; l < 2; l++) {
        for (m = 0; m < 2; m++) {
            printf("%d ", ans[l][m]);
        }
        printf("\n");
    }
    return 0;
}