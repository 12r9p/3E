#include <stdio.h>

#define N 2  // 入力する文字列の数
#define M 10 // 各文字列の最大長(終端含めてM、文字数は最大9)

int main(void)
{
    int i, j;
    char str[N][M];
    // 2つの最大長(M-1)の文字列を連結し、末尾\0の1文字を加味
    char join[(M - 1) * N + 1]; // = 2*(M-1)+1 と同等（N=2前提）

    for (i = 0; i < N; i++)
    {
        printf("Input str[%d]: ", i);
        // 最大9文字までの読み取りを保証
        scanf("%9s", str[i]);
        // 念のため明示的に終端（scanf %9s でも終端される）
        str[i][M - 1] = '\0';
    }

    // 連結: join に str[0], str[1] の順でコピー
    int pos = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
        {
            join[pos++] = str[i][j];
        }
    }
    join[pos] = '\0';

    printf("Joined string: %s\n", join);
    return 0;
}
