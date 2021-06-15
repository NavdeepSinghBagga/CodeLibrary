#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
typedef vector<int>     vi;
typedef vector<ll>      vl;

ll calc(ll n) {
    ll ans = 1;
    if (n == 0) return 1;

    ans = calc(n / 2);
    if (n % 2 == 0) return ((ans % mod) * (ans % mod)) % mod;
    else return (2 * (ans % mod) * (ans % mod)) % mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n, ans = 1;
        cin >> n;
        cout << calc(n - 1) << '\n';
    }
    return 0;
}
