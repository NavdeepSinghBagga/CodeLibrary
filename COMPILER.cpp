//Codechef Compilers and parsers

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
	string str;
	cin >> str;
	ll ans = 0, i, t1 = 0, siz = str.length();
	for (i = 0; i < siz; i++) {
		if (str[i] == '<')
			t1++;
		else {
			t1--;
			if (t1 < 0)
				break;
			else if (t1 == 0) {
				ans = max(ans, i + 1);
			}
		}
	}
	cout << ans << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solution();
	}
	return 0;
}