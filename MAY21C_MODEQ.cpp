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
        ll n, m, c = 0, res;
        cin >> n >> m;
        for (ll i = n; i >= 1; i--) {
            res = m - (m % i);
            for (ll j = 1; j < i; j++) { //j< sqrt(res) &&
                if ( res % j == 0 ) {
                    c++;
                    //if( (res/j) != j && (res/j) < i) c++;
                }

            }
        }
        cout << c << '\n';
    }
    return 0;
}
