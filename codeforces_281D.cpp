#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll ans = 0, inpu;
    stack <ll> stk;
    for (ll i = 0; i < n; i++) {
        cin >> inpu;
        while (!stk.empty()) {
            ans = max(ans, stk.top()^inpu);
            if (stk.top() < inpu)
                stk.pop();
            else break;
        }
        stk.push(inpu);
    }
    cout << ans;
    return 0;
}