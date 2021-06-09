#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int t; cin >> t;
	while (t--) {
		int a;
		cin >> a;
		for (int i = 0; i < n; i++) {
			if (arr[i] == a) {
				cout << "Integer " << a << " is found at index " << i << endl;
				break;
			}
		}
	}
}