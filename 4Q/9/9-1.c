# include <stdio.h>
# define n 11

//入力した文字列(最大10文字)を逆順に表示するプログラム

int main(void){
    int i;
    char str[n];
    char *p, *q;

    printf("Input string: ");
    scanf("%s", str);

    p = str;
    q = str;

    while (*q !='\0'){
        printf("%c", *q);
        q++;
    }
    printf("\n");

    //逆順表示
    q--;
    for (i = 0; i < n; i++){
        if (q < p){
            break;
        }
        printf("%c", *q);
        q--;
    }
    printf("\n");

    return 0;

}