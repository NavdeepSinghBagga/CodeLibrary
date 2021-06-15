#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    long long int n, k, ch;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld", &n, &k);
        ch = (n / k) % k;
        if (ch != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
