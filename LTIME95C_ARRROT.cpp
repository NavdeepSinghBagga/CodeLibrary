#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int>     vi;
typedef vector<ll>      vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n], sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    ll q, temp;
    cin >> q;
    while (q--) {
        cin >> temp;
        sum = sum * 2;
        while (sum < 0)
            sum = sum + 1000000007;
        // cout<<sum%1000000007<<"printing "<<sum<<"\n";
        sum %= 1000000007;
        cout << sum << endl;
    }
    return 0;
}
