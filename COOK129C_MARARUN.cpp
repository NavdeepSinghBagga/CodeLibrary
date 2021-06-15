#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int>     vi;
typedef vector<ll>      vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, D, d, a, b, c, tot, pri;
    cin >> t;
    while (t--) {
        cin >> D >> d >> a >> b >> c;
        tot = D * d;
        pri = 0;
        if (tot >= 10) pri = a;
        if (tot >= 21) pri = b;
        if (tot >= 42) pri = c;
        cout << pri << '\n';
    }
    return 0;
}
