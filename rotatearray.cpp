//Rotate array left, modify for right
// Basic O(n) time and O(n) space approach

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
	int r;
	cin >> r;
	int i = r, j = 0, arrR[n];

	for (; i < n; i++, j++)
		arrR[j] = arr[i];
	for (i = 0; i < r; i++, j++)
		arrR[j] = arr[i];
	for (i = 0; i < n; i++)
		cout << arrR[i] << " ";
}