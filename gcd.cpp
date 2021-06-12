#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int r) {
	int a = n % r;
	if (!a) return r;
	else return gcd(r, a);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b);
}