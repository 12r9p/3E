#  include <stdio.h>
# define n 2
# define m 10

int main(void){
    int i, j, k;
    char str[n][m];
    char join[m*2-n+1];

    for (i = 0; i < n; i++){
        printf("Input str[%d] : ", i);
        scanf("%s", str[i]);
        str[i][m-1] = '\0';
    }
    printf("\n");

    k = 0;

    //ポインタを使って文字列を連結する
    char *p;
    for (i = 0; i < n; i++){
        p = str[i];
        while (*p != '\0'){
            join[k++] = *p++;
        }
    }
    join[k] = '\0';

    printf("Joined string: %s\n", join);

    return 0;
}