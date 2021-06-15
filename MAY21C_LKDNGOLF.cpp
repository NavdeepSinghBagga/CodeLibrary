#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int>     vi;
typedef vector<ll>      vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, x, k;
        cin >> n >> x >> k;
        if ( ((n + 1) % k == x % k) || !(x % k) ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
