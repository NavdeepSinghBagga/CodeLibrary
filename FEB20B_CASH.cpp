#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, k, sum = 0, i, a;
		cin >> n >> k;
		for (i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		cout << (sum % k) % k << "\n";
	}
}
