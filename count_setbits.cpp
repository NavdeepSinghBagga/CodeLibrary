#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n, a, ct = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        while (a) {
            if (a & 1)
                ct++;
            a /= 2;
        }
    }
    cout << ct;
    return 0;
}