#include <stdio.h>

int main(void)
{
    int a = 3980;       /* 与えられた金額 */
    int b = a / 1000;   /* 千の位（3）      */
    int c = a % 1000;   /* 下 3 桁（980）    */

    /* 1行目：区切り無し  ──  \3980         */
    printf("\\%d\n", a);

    /* 2行目：千区切りあり ──  \3,980
       c は常に 3 桁表示にしたいので 03 フラグを付ける   */
    printf("\\%d,%03d\n", b, c);

    return 0;
}