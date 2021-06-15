#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long b = 1, c = 1;
    long double a = 1, ans = 1.0, term1 = 1.0, term2 = 1.0;
    cin >> a >> b >> c;
    bool chk = (a != 0 && a != 1 && a > 1 );

    if (chk) {
        long double y = 1.0;
        y = (1 + b - a) / (a * b - b);
        if (y <= c) {
            c = c - (long long)y;
            ans = ans + (long long)y * b;;
            while ( ( (ans * a) < (ans + b) ) && c > 0 ) {
                ans += b;
                c--;
                //cout<<ans<<" ";
            }
            term2 = c * log2(a);
            term1 = log2(ans);
            ans = term1 + term2 ;
            long long ans2 = (long long)ans;
            int pres = log10(ans2) ;
            //cout<<pres<<" ";
            cout << setprecision(pres + 9) << ans;
        }
    }
    else {
        ans = log2( ans + (c * b) ) ;
        long long ans2 = (long long)ans;
        int pres = log10(ans2) ;
        //cout<<pres<<" ";
        cout << setprecision(pres + 9) << ans;
    }

}