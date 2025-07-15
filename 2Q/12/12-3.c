#include <stdio.h>

int main(void)
{
    int i, n;
    double score, sum;

    do {
        printf("input a number of students: ");
        scanf("%d", &n);
    } while (n <= 0);

    sum = 0.0;
    i = 1;
    while (i <= n) {
        printf("input a score %d: ", i);
        scanf("%lf", &score);
        sum += score;
        i++;
    }

    printf("average = %lf\n", sum / n);
    return 0;
}
