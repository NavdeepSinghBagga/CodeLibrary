// Rearrrange the array with O(1) extra space
// given array arr[] change arr[i] to arr[arr[i]].
// Note arr[i] will be b/w 0 to N-1, where n is the size of array

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
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		if (arr[i] < i) {
			arr[i] = arr[i] * n + arr[arr[i]] / n;
		}
		else {
			arr[i] = arr[i] * n + arr[arr[i]];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] % n << " ";
	}

}
// Sample input
// 2
// 1 0

// 3
// 1 0 2

// 5
// 4 0 2 1 3

// Sample output

// 0 1

// 0 1 2
// 3 4 2 0 1
