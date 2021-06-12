//Given an array specifying the link between index i to index arr[i]
//There can be multiple incoming paths to a node, but only one exit path
//Find the nearestmeetingcell NMC from given cell C1 and C2


#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int c1, c2;
		cin >> c1 >> c2;

		bool vis1[n] = {0}, vis2[n] = {0};
		int ct1[n] = {0}, ct2[n] = {0};

		int next = c1, count = 0;
		while (arr[next] != (-1) && vis1[next] == 0 ) {
			vis1[next] = 1;
			ct1[next] = count++;
			next = arr[next];

		}
		next = c2;
		count = 0;
		while (arr[next] != (-1) && vis2[next] == 0 ) {
			vis2[next] = 1;
			ct2[next] = count++;
			next = arr[next];
		}
		count = INT_MAX;
		int maxindex = -1;
		for (int i = 0; i < n; i++) {
			if (vis1[i] && vis2[i]) {

				if ( (ct1[i] + ct2[i]) < count ) {

					count = (ct1[i] + ct2[i]);
					maxindex = i;
				}
			}
		}
		cout << maxindex << '\n';

	}
}
/*
Sample testcase
1
23
4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21
9 2

Sample output
4
/*