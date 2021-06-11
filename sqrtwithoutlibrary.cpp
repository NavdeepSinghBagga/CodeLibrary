#include <bits/stdc++.h>
using namespace std;


double SQroot(double n, double l, double h) {
	double m = (l + h) / 2;

	if ( (m * m) == n  || abs((m * m) - n) < 0.001 )
		return m;
	if ( (m * m) > n )
		return SQroot(n, l, m);
	else
		return SQroot(n, m, h);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	double n;
	cin >> n;
	cout << SQroot(n, 0, n);
}