extern int ans[2][2];

void seki(int h1[2][3], int h2[3][2]) {
    int l, m, n;
    for (l = 0; l < 2; l++) {
        for (m = 0; m < 2; m++) {
            ans[l][m] = 0;
            for (n = 0; n < 3; n++) {
                ans[l][m] += h1[l][n] * h2[n][m];
            }
        }
    }
}