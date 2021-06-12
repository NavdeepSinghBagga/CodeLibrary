#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, i;
	cin >> t;
	while (t--) {
		long long N, k;
		cin >> N;
		long long int arr[N];
		for (i = 0; i < N; i++)
			cin >> arr[i];
		cin >> k;
		sort(arr, arr + N);
		cout << arr[k - 1] << '\n';
	}
	return 0;
}