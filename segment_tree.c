#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>


int st[400000];
int a[4000000];

int min(int aa, int bb) {
    if (aa > bb)
        return bb;
    return aa;
}

void build(int ind, int start, int end) {
    if (start == end)
        st[ind] = a[end];
    else {
        int mid = (start + end) / 2;
        build(2 * ind + 1, start, mid);
        build(2 * ind + 2, mid + 1, end);
        st[ind] = min(st[2 * ind + 1], st[2 * ind + 2]);
    }
}

int query(int l, int r, int ind, int start, int end) {
    if (l > end || r < start)
        return INT_MAX;
    if (l <= start && r >= end)
        return st[ind];

    int mid = (start + end) / 2;
    int left = query(l, r, 2 * ind + 1, start, mid);
    int right = query(l, r, 2 * ind + 2, mid + 1, end);
    return min(left, right);
}


int main()
{
    int n, q, x, y, i;
    scanf("%d %d", &n, &q);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    build(0, 0, n - 1);
    while (q--)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", query(x , y , 0, 0, n - 1));
    }
    return 0;
}