#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int n, a[100001], pro = 0, i;
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<long long int>());
        for (i = 0; i < n; i++) {
            if (a[i] - i < 0) {break;}
            pro += (a[i] - i);
        }
        cout << (pro % 1000000007) % 1000000007 << "\n";

    }
}
