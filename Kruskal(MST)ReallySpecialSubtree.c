#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int x, y, z;
    x = a[0]; y = a[1]; z = a[2];
    a[0] = b[0]; a[1] = b[1]; a[2] = b[2];
    b[0] = x; b[1] = y; b[2] = z;
}
void sort(int e, int a[e][3]) {
    for (int i = 0; i < e - 1; i++)
        for (int j = 0; j < (e - i - 1); j++) {
            if (a[j][2] > a[j + 1][2]) {
                swap(a[j], a[j + 1]);
            }
            else if (a[j][2] == a[j + 1][2]) {
                if (a[j][0] + a[j][1] + a[j][2] > a[j + 1][0] + a[j + 1][1] + a[j + 1][2])
                    swap(a[j], a[j + 1]);
            }
        }
}

int find(int *a, int u, int v) {
    return (a[u] == a[v]);
}
void Union(int *a, int u, int v, int n) {
    for (int i = 1; i <= n; i++)
        if (a[i] == u)
            a[i] = v;
}
void Kruskal(int e, int n, int a2d[e][3], int *a1d) {
    int i, count = 0;
    long long int MST = 0;
    for (i = 0; i < e && count != (n - 1); i++) {
        if ( !find(a1d, a2d[i][0], a2d[i][1]) ) {
            Union(a1d, a1d[a2d[i][0]], a1d[a2d[i][1]], n);
            //printf("%d-->%d  %d\n",a2d[i][0],a2d[i][1],a2d[i][2]);
            count++;
            MST += a2d[i][2];
        }
    }
    printf("%lld", MST);
}
int main()
{
    int n, e;
    scanf("%d%d", &n, &e);
    int a2d[e][3], a1d[n + 1];
    for (int i = 0; i < e; i++) {
        scanf("%d%d%d", &a2d[i][0], &a2d[i][1], &a2d[i][2]);
    }
    sort(e, a2d);
    /*for(int i=0;i<e;i++){
        printf("\n%d %d %d\n",a2d[i][0],a2d[i][1],a2d[i][2]);
    }*/
    for (int i = 1; i <= n; i++) {
        a1d[i] = i;
    }
    Kruskal(e, n, a2d, a1d);
    return 0;
}
