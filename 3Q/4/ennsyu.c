#include <stdio.h>

#define N 2

double average_bmi(double h[], double w[]);

int main(void)
{
    int i;
    double ave;
    double h[N];
    double w[N];

    for (i = 0; i < N; i++)
    {
        printf("Input height %d [cm]: ", i + 1);
        scanf("%lf", &h[i]);
        printf("Input weight %d [kg]: ", i + 1);
        scanf("%lf", &w[i]);
    }

    ave = average_bmi(h, w);
    printf("Average of BMI is %.1f.\n", ave);
    return 0;
}

double average_bmi(double h[], double w[])
{
    int i;
    double sum = 0.0;
    for (i = 0; i < N; i++)
    {
        double m = h[i] / 100.0; // cm -> m
        sum += w[i] / (m * m);
    }
    return sum / N;
}
