#include <bits/stdc++.h>


using namespace std;

int main() {
    long long t = 1;
    cin >> t;
    while (t--) {
        long long n = 1, a = 1;
        cin >> n;
        //n=i;
        if (n == 1) cout << "1 1\n";
        else if (n == 2) cout << "2 2 1\n";
        else {
            a = (n - 3) % 4;
            if (a == 1) cout << "1 " << n << '\n';
            else if (a == 2) cout << "1 1\n";
            else if (a == 3) cout << "2 " << n << " 1\n";
            else cout << "0\n";
        }
    }
    return 0;
}