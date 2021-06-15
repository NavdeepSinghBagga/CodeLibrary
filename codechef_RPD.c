#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, N, prod, sum, maxsum = 0;
    int a[10000] = {0};
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        maxsum = 0;
        scanf("%d", &N);
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                prod = a[j] * a[k];
                sum = 0;
                while (prod) {
                    sum = sum + (prod % 10);
                    prod /= 10;
                }
                if (maxsum < sum)
                    maxsum = sum;
            }
        }
        printf("%d\n", maxsum);
    }
}
