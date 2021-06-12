#include <stdio.h>
#include <stdlib.h>

void dijkstra() {
    int i, j, u, v, s, n, m;
    scanf("%d%d", &n, &m);
    if ( m <= ( n * (n - 1) / 2 ) ) {
        int a[n][n];
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++) {
                a[i][j] = 9999999;
                if (i == j)
                    a[i][i] = 0;
            }

        for (i = 0; i < m; i++) {
            scanf("%d%d", &u, &v);
            a[u - 1][v - 1] = 1;
            a[v - 1][u - 1] = 1;
        }
        scanf("%d", &s);
        s = s - 1;
        int visited[n];
        int minin, minval = 9999999;
        for (i = 0; i < n; i++)
            visited[i] = 0;
        int *cost = a[s];

        visited[s] = 1;
        for (i = 0; i < n; i++)
            if (visited[i] == 0 && cost[i] != 0 && cost[i] < minval) {
                minval = cost[i];
                minin = i;
            }

        for (i = 0; i < n - 1; i++) {
            visited[minin] = 1;
            for (j = 0; j < n; j++) {
                if (visited[j] == 0) {
                    if (cost[j] > ( minval + a[minin][j] ) ) {
                        cost[j] = ( minval + a[minin][j] );
                    }
                }
            }
            minval = 9999999;
            for (j = 0; j < n; j++) {
                if (visited[j] == 0 && cost[j] != 0 && cost[j] < minval ) {
                    minval = cost[j];
                    minin = j;
                }
            }
        }
        for (i = 0; i < n; i++) {
            if (cost[i] != 0) {
                if (cost[i] > 9999998)
                    printf("-1 ");
                else
                    printf("%d ", cost[i] * 6);
            }
        }
    }
}
int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        dijkstra();
        printf("\n");
    }
}
