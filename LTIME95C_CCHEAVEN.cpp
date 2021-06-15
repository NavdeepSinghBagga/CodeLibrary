#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int>     vi;
typedef vector<ll>      vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        ll n, count = 0;
        string dum;
        bool flag = 0;
        cin >> n;
        cin >> dum;
        for (ll i = 1; i <= n; i++) {
            if (dum[i - 1] == '1') count++;
            if (count >= (i + 1) / 2) {
                flag = 1;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
