#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, i = 0;
	vector<int> arr;
	cin >> t;
	while (t--) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	long long zero = 0, one = 0;
	for (auto it : arr) {
		if (i) {
			zero = zero * 10 + it;
			i = 0;
		}
		else {
			one = one * 10 + it;
			i = 1;
		}
	}
	cout << zero + one;
	return 0;
}