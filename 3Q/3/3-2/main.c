# include <stdio.h>

int wa(void);
int sa(void);
int seki(void);
int a,b;

int main(void){
    printf("Input a: ");
    scanf("%d",&a);
    printf("Input b: ");
    scanf("%d",&b);

    printf("a + b = %d\n",wa());
    printf("a - b = %d\n",sa());
    printf("a * b = %d\n",seki());
    return 0;
}

/* Output

❯ ./3-2
Input a: 1
Input b: 2
a + b = 3
a - b = -1
a * b = 2

*/