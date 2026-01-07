# include <stdio.h>

int main (void) {
    int l, m;
    int h1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int h2[2][3] = {{1, 1, 1}, {2, 2, 2}};

    printf("h1 + h2 is ... \n");

    //ポインタを用いてh1,h2の和を計算する
    for (l = 0; l < 2; l++) {
        for (m = 0; m < 3; m++) {
            printf("%d ", *(*(h1 + l) + m) + *(*(h2 + l) + m));
        }
        printf("\n");
    }

    return 0;
}
