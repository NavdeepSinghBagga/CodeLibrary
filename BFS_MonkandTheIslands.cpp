#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> vl;

void solution() {
	ll n, m, a, b;
	cin >> n >> m;
	vl gra[n + 1];
	for (ll i = 0; i < m; i++) {
		cin >> a >> b;
		gra[a].push_back(b);
		gra[b].push_back(a);
	}
	queue<ll> q;
	vl dist(n + 1);
	vector <bool> vis(n + 1, 0);
	q.push(1);
	dist[1] = 0;
	vis[1] = 1;
	while ( !q.empty() && !vis[n] ) {
		a = q.front();
		q.pop();
		for (ll i : gra[a]) {
			if ( vis[ i ] == 0 ) {
				vis[ i ] = 1;
				q.push(i);
				dist[i] = dist[a] + 1;
			}
		}
	}
	cout << dist[n] << "\n";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--)
		solution();
	return 0;
}