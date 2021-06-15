#include <stdio.h>
#include <math.h>
main() {
    int t;
    long long int n, m, p;
    scanf("%d", &t);
    while (t--) {
        fflush(stdin); scanf("%lld", &n); fflush(stdin);
        m = n;
        n = log2(n);
        if (n == 0 || n == 1) {
            printf("%d\n", n);
        }
        else {
            p = pow(2, n);
            if (m < p) {
                n = n - 1;
            }
            n = n % 4;
            if (n == 1)
                n = 9;
            printf("%d\n", n);
        }
    }
}
