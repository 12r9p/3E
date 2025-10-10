#include <stdio.h>

int do12yen(double);

double rate;

int main(void)
{
    double dollar;
    int yen;

    printf("Input exchange rate[JPY/USD]: ");
    scanf("%lf", &rate);
    printf("INPUT price[USD]: ");
    scanf("%lf", &dollar);

    yen = do12yen(dollar);
    printf("%.2f USD is %d JPY.\n", dollar, yen);
    return 0;
}

int do12yen(double d)
{
    return (int)(rate * d);
}

/* Output

❯ ./3-1
Input exchange rate[JPY/USD]: 110.2
INPUT price[USD]: 12.5
12.50 USD is 1377 JPY.

*/