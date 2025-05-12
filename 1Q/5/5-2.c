#include <stdio.h>

int main(void)
{
    double a, b, c;   /* 上底 (a), 下底 (b), 高さ (c) */

    /* 各辺の長さを入力 */
    printf("top base value a: ");
    if (scanf("%lf", &a) != 1) {
        fprintf(stderr, "入力エラー: 上底 a を読み取れませんでした。\n");
        return 1;
    }

    printf("bottom base value b: ");
    if (scanf("%lf", &b) != 1) {
        fprintf(stderr, "入力エラー: 下底 b を読み取れませんでした。\n");
        return 1;
    }

    printf("height c: ");
    if (scanf("%lf", &c) != 1) {
        fprintf(stderr, "入力エラー: 高さ c を読み取れませんでした。\n");
        return 1;
    }

    /* 台形の面積を計算 */
    double area = (a + b) * c / 2.0;

    /* 結果を小数点以下 2 桁で表示 */
    printf("The area of trapezoid: %.2f\n", area);

    return 0;
}