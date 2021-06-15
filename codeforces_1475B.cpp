#include<bits/stdc++.h>
using namespace std;

#define ll long long

int the_function() {
    ll a;
    cin >> a;
    ll quo = a / 2020, rem = a % 2020;
    if (quo < rem)
        return 0;
    return 1;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int x = the_function();
        if (x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}