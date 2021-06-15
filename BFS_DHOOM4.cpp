#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solution() {
    int curr, key, n;
    cin >> curr >> key >> n;
    int arr[n];
    ll dist[100000] = {0};
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    queue<ll> que;
    que.push(curr);
    if (curr == key)
        return 0;
    while (!que.empty()) {
        curr = que.front();
        que.pop();
        for (int i = 0; i < n; i++) {
            ll prd = (curr * arr[i]) % 100000;
            if (prd < key && dist[prd] == 0)
                que.push(prd % 100000);
            if ( dist[prd] == 0 || (dist[prd] > (dist[curr] + 1) ) )
                dist[prd] = dist[curr] + 1;
        }
    }
    if (dist[key])
        return dist[key];
    else return -1;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll out = solution();
    cout << out << "\n";
    return 0;
}