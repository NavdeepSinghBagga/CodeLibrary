#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long ar1[10007], ar2[10007], n, a, i, sum = 0;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> ar1[i];
		}
		for (i = 0; i < n; i++) {
			cin >> ar2[i];
		}

		sort(ar1, ar1 + n);
		sort(ar2, ar2 + n);

		for (i = 0; i < n; i++) {
			if (ar1[i] < ar2[i])
				sum += ar1[i];
			else sum += ar2[i];
		}
		cout << sum << "\n";
	}
	return 0;
}