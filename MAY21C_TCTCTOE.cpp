#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int>		vi;
typedef vector<ll>		vl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int cx = 0, co = 0, c_ = 0, cxc[3] = {0}, coc[3] = {0}, cxr[3] = {0}, cor[3] = {0};
		string str[3];
		cin >> str[0] >> str[1] >> str[2];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (str[j][i] == 'X') cxr[j]++;
				else if (str[j][i] == 'O') cor[j]++;
				if (str[i][j] == 'X') cxc[j]++;
				else if (str[i][j] == 'O') coc[j]++;
				if (str[i][j] == 'X') cx++;
				else if (str[i][j] == 'O') co++;
				else c_++;
			}
		}
		if (cx - co != 0 && cx - co != 1) {
			cout << "3\n";
			continue;
		}
		if (cxc[0] == 3 || cxc[1] == 3 || cxc[2] == 3 || cxr[0] == 3 || cxr[1] == 3 || cxr[2] == 3 ) {
			if (coc[0] == 3 || coc[1] == 3 || coc[2] == 3 || cor[0] == 3 || cor[1] == 3 || cor[2] == 3 ) {
				cout << "3\n";
				continue;
			}
		}
		if ( cxc[0] == 3 || cxc[1] == 3 || cxc[2] == 3 || cxr[0] == 3 || cxr[1] == 3 || cxr[2] == 3 || (str[0][0] == 'X' && str[1][1] == 'X' && str[2][2] == 'X') || (str[0][2] == 'X' && str[1][1] == 'X' && str[2][0] == 'X' ) ) {
			if (cx == co) {
				cout << "3\n";
				continue;
			}
		}
		if ( coc[0] == 3 || coc[1] == 3 || coc[2] == 3 || cor[0] == 3 || cor[1] == 3 || cor[2] == 3 || (str[0][0] == 'O' && str[1][1] == 'O' && str[2][2] == 'O') || (str[0][2] == 'O' && str[1][1] == 'O' && str[2][0] == 'O' ) ) {
			if (cx != co) {
				cout << "3\n";
				continue;
			}
		}
		if (cxc[0] == 3 || cxc[1] == 3 || cxc[2] == 3 || cxr[0] == 3 || cxr[1] == 3 || cxr[2] == 3 || coc[0] == 3 || coc[1] == 3 || coc[2] == 3 || cor[0] == 3 || cor[1] == 3 || cor[2] == 3 ) {
			cout << "1\n";
			continue;
		}
		if ( (str[0][0] == 'O' && str[1][1] == 'O' && str[2][2] == 'O') || (str[0][2] == 'O' && str[1][1] == 'O' && str[2][0] == 'O' ) || (str[0][0] == 'X' && str[1][1] == 'X' && str[2][2] == 'X') || (str[0][2] == 'X' && str[1][1] == 'X' && str[2][0] == 'X' ) ) {
			cout << "1\n";
			continue;
		}
		if (c_ == 0) cout << "1\n";
		else cout << "2\n";
	}
}