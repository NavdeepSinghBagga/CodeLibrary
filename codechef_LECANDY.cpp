#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, c, k, net = 0;
		cin >> n >> c;
		for (int i = 0; i < n; i++) {
			cin >> k;
			net += k;
		}
		if ((c - net) < 0)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}
