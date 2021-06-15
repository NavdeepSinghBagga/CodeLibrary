#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string str = "codeforces";
    ll n;
    cin >> n;
    ll prd = 1, i = 0;
    vi arr(10 , 1);
    while (prd < n) {
        i %= 10;
        prd /= arr[i];
        prd = prd * (++arr[i]);
        i++;
    }
    for (int i = 0; i < 10; i++) {
        while (arr[i]--)
            cout << str[i];
    }
    return 0;
}