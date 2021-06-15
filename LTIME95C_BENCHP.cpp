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
        ll n, w, wr;
        cin >> n >> w >> wr;
        ll arr[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            if (mp.find(arr[i]) == mp.end()) {
                mp[arr[i]] = 1;
            }
            else {
                mp[arr[i]]++;
            }
        }
        if (wr >= w) {
            cout << "YES\n";
        }
        else {

            for (auto& it : mp) {
                if (it.second >= 2) {
                    wr += (it.first * 2 ) * (it.second / 2);
                }
            }
            if (wr >= w) cout << "YES\n";
            else cout << "NO\n";

        }
    }
    return 0;
}
