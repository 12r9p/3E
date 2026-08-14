# include <stdio.h>

int main (void){
    char word[] = "ABC";
    FILE *fp;
    int r;

    if(fp = fopen("file.txt", "w"), fp == NULL){
        fprintf(stderr, "File open error\n");
        return 1;
    }else{
        r = fprintf(fp, "%s\n", word);
        if(r < 0){
            fprintf(stderr, "File write error\n");
    }

    
}