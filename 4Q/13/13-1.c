#include <stdio.h>

int main(void) {
    char name[20];
    int math, eng;
    int matT = 0, engT = 0, n = 0;
    FILE *fi, *fo;

    if ((fi = fopen("data.txt", "r")) == NULL) {
        printf("Input file open error.\n");
    } else {
        while (fscanf(fi, "%s %d %d", name, &math, &eng) != EOF) {
            matT += math;
            engT += eng;
            n++;
        }
        fclose(fi);

        if ((fo = fopen("average.txt", "w")) == NULL) {
            printf("Output file open error.\n");
        } else {
            fprintf(fo, "Math: %.2f\n", (double)matT / n);
            fprintf(fo, "English: %.2f\n", (double)engT / n);
            fclose(fo);
        }
    }

    return 0;
}
