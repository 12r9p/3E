# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void){

    printf("あなたの今日の運勢\n");
    srand((unsigned int)time(NULL));
    int fortune = rand() % 5 + 1;

    if (fortune == 1) {
        printf("大吉\n");
    } else if (fortune == 2) {
        printf("中吉\n");
    } else if (fortune == 3) {
        printf("小吉\n");
    } else if (fortune == 4) {
        printf("末吉\n");
    } else {
        printf("凶:\n");
    }

    return 0;
}
