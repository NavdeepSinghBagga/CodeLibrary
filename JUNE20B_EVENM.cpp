#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        long long a[N][N];
        long long m, n;
        m = N; n = N;
        long long val = 1;
        long long k = 0, l = 0;
        while (k < m && l < n)
        {
            for (long long i = l; i < n; ++i)
                a[k][i] = val++;
            k++;
            for (long long i = k; i < m; ++i)
                a[i][n - 1] = val++;
            n--;
            if (k < m) {
                for (long long i = n - 1; i >= l; --i)
                    a[m - 1][i] = val++;
                m--;
            }
            if (l < n) {
                for (long long i = m - 1; i >= k; --i)
                    a[i][l] = val++;
                l++;
            }
        }
        for (long long i = 0; i < N; i++)
        {
            for (long long j = 0; j < N; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}
