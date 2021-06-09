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
		int mid = 0, l = 0, h = n - 1;
		while (l <= h) {
			mid = (l + h) / 2;
			if (arr[mid] > a) h = mid - 1;
			else if (arr[mid] < a) l = mid + 1;
			else break;
		}
		if ( l > h) cout << "Not found\n";
		else cout << "Integer " << a << " is found at index " << mid << endl;
	}
}