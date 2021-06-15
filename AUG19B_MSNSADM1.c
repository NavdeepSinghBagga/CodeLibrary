#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, i, maxscore, score;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        maxscore = 0;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            scanf("%d", &b[i]);
        for (i = 0; i < n; i++) {
            score = 20 * a[i] - 10 * b[i];
            if (maxscore < score)
                maxscore = score;
            if (maxscore < 0)
                maxscore = 0;
        }
        printf("%d\n", maxscore);
    }
}
