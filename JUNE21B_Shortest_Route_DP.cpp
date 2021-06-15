#include <bits/stdc++.h>
using namespace std;


#define ll long long
typedef vector<int>		vi;
typedef vector<ll>		vl;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;
		ll arr[n], arrm[m];
		for (ll i = 0; i < n; i++)
			cin >> arr[i];
		for (ll i = 0; i < m; i++)
			cin >> arrm[i];
		ll arrL[n], arrR[n];
		ll found = 0, count = 0;
		for (ll i = 0; i < n; i++) {
			if (arr[i] == 1) {
				found = 1;
			}
			if (!found) {
				count = 9999999;
			}
			else if (arr[i] == 1) {
				count = 0;
			}
			else {
				count++;
			}
			arrR[i] = count;
			if (arr[i] == 2)
				arrR[i] = 0;
		}
		count = 0;
		found = 0;
		for (ll i = n - 1; i >= 0; i--) {
			if (arr[i] == 2) {
				found = 1;
			}
			if (!found) {
				count = 9999999;
			}
			else if (arr[i] == 2) {
				count = 0;
			}
			else {
				count++;
			}
			arrL[i] = count;
			if (arr[i] == 1)
				arrL[i] = 0;
		}
		// for (ll i = 0; i < n; i++) cout << arrR[i] << " ";
		// cout << '\n';
		// for (ll i = 0; i < n; i++) cout << arrL[i] << " ";
		// cout << '\n';
		arrR[0] = 0;
		arrL[0] = 0;
		ll index, out;
		for (ll i = 0; i < m; i++) {

			index = arrm[i] - 1;
			out = min(arrR[index], arrL[index]);
			if (out == 9999999)
				out = -1;
			cout << out << ' ';
		}
		cout << '\n';
	}
	return 0;
}
