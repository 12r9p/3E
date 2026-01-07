#include <stdio.h>

struct score
{
    int math;
    int english;
} data[40];

int main(int argc, char *argv[])
{
    int i, n = 0;

    // 引数にCSVファイルが指定されている場合は、件数を自動で取得
    if (argc > 1)
    {
        FILE *fp = fopen(argv[1], "r");
        if (fp == NULL)
        {
            fprintf(stderr, "File open error: %s\n", argv[1]);
            return 1;
        }
        while (n < 40 && fscanf(fp, "%d,%d", &data[n].math, &data[n].english) == 2)
        {
            n++;
        }
        fclose(fp);
        if (n == 0)
        {
            fprintf(stderr, "No valid rows in file.\n");
            return 1;
        }
    }
    else
    {
        // csvの引数が与えられていなかったら標準入力から読み込む
        printf("input number of student: ");
        scanf("%d", &n);
        if (n <= 0 || n > 40)
        {
            fprintf(stderr, "number of students must be between 1 and 40\n");
            return 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("No.%d Math=", i + 1);
            scanf("%d", &data[i].math);
            printf("No.%d English=", i + 1);
            scanf("%d", &data[i].english);
        }
    }

    struct score min = {data[0].math, data[0].english};
    struct score max = {data[0].math, data[0].english};
    struct score sum = {0, 0};

    for (i = 0; i < n; i++)
    {
        sum.math += data[i].math;
        sum.english += data[i].english;

        if (data[i].math < min.math)
            min.math = data[i].math;
        if (data[i].english < min.english)
            min.english = data[i].english;

        if (data[i].math > max.math)
            max.math = data[i].math;
        if (data[i].english > max.english)
            max.english = data[i].english;
    }

    // ヘッダも行出力と同じ幅で整列
    printf("%-8s %4s %9s %6s\n", "No.", "Math", "English", "Total");
    for (i = 0; i < n; i++)
    {
        printf("No.%2d : %4d %9d %6d\n", i + 1, data[i].math,
               data[i].english, data[i].math + data[i].english);
    }

    printf("Ave. : %6.1f %9.1f %6.1f\n", (float)sum.math / n,
           (float)sum.english / n, (float)(sum.math + sum.english) / n);
    printf("Min : %4d %9d %6d\n", min.math, min.english,
           min.math + min.english);
    printf("Max : %4d %9d %6d\n", max.math, max.english,
           max.math + max.english);

    return 0;
}