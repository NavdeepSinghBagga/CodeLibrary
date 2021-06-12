#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n;
	int arr[n];
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]]++;
	}
	cin >> k;
	int out, ct = 0;
	for (auto it : mp) {
		ct += it.second;
		if (ct >= k) {
			out = it.first;
			break;
		}
	}
	cout << out << "\n";

}