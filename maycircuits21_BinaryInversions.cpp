#include <bits/stdc++.h>

using namespace std;

#define ll long long
typedef vector<int>		vi;
typedef vector<ll>		vl;

int main() {
	ll n = 1, a = 1, x = 1, b, total = 1;
	cin >> n >> a >> x;
	b = n - a;
	total = a * b;
	if ( x > total ) cout << "-1";
	else {
		ll aa = a, bb = b, xx = x;
		stack<bool> st;
		bool flag = false;
		while (xx >= bb && xx <= aa * bb ) {
			st.push(0);
			xx -= bb;
			aa--;
		}
		if ( st.empty() ) {
			flag = true;
		}
		ll c = bb - xx;
		bb = bb - c;
		while ( c ) {
			st.push(1);
			c--;
		}
		st.push(0);
		aa--;
		while (bb) {
			st.push(1);
			bb--;
		}
		while (aa > 0) {
			st.push(0);
			aa--;
		}

		// if(flag == true){
		//     st.push(0);
		// }
		while (!st.empty()) {
			cout << st.top() << " ";
			st.pop();
		}

	}
	return 0;
}