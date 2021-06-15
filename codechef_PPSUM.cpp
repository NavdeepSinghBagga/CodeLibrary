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
        int rec, n;
        cin >> rec >> n;
        while (rec) {
            n = (n * (n + 1) / 2);
            rec--;
        }
        cout << n << '\n';
    }
    return 0;
}
