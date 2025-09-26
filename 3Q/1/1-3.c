#include <stdio.h>

int judge(int score);

int main(void)
{
    int a;
    while (1)
    {
        printf("Input score: ");
        scanf("%d", &a);
        if (judge(a) == 0)
        {
            break;
        }
    }
    return 0;
}

int judge(int score)
{
    if (score < 0)
    {
        printf("Done.\n");
        return 0;
    }
    else if (score < 60)
    {
        printf("failing\n");
    }
    else if (score < 70)
    {
        printf("passing\n");
    }
    else if (score < 80)
    {
        printf("good\n");
    }
    else
    {
        printf("excellent\n");
    }
    return 1;
}
