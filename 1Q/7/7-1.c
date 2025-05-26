#include <stdio.h>

int main(void)
{
    int mask = 0x0020, c = 'a';

    c &= ~mask;                 // ← ここを埋める

    printf("大文字に変換：%c\n", c);   // 出力: A
    return 0;
}