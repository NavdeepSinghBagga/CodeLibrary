#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<int>     vi;
typedef vector<ll>      vl;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    bool arr[26] = {0};
    string str = "EQUINOX";
    for (int i = 0; i < str.length(); i++ ) {
        arr[str[i] - 65] = 1;
    }
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        ll sar = 0, anu = 0;
        while (n--) {
            string ano;
            cin >> ano;

            if (arr[ano[0] - 65]) {
                sar += a;
            }
            else {
                anu += b;
            }
        }
        if (sar == anu) cout << "DRAW\n";
        else if (sar > anu ) cout << "SARTHAK\n";
        else cout << "ANURADHA\n";


    }

    return 0;
}
