#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, x, q, count, a, b, c;
    cin >> n >> m >> x >> q;
    bool arr[n][m] {};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         //arr[i][j] = 0;
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<'\n';
    // }

    int typ;
    count = n * m;
    for (long long i = 0; i < q; i++) {
        cin >> typ;
        if (typ == 1) {
            cin >> a >> b >> c;
            for (long long j = b; j <= c; j++) {
                arr[a][j] = 1;
                count--;
            }
        }
        else if (typ == 2) {
            cin >> a >> b >> c;
            for (long long j = b; j <= c; j++) {
                arr[j][a] = 1;
                count--;
            }
        }
        else if (typ == 3) {
            cin >> a;
            if ( a > count ) {
                cout << "-1\n";
            }
            else {
                priority_queue <int, vector<int>, greater<int> > pq;
                for (long long j = 0; j < n; j++) {
                    for (long long k = 0; k < m; k++) {
                        if (arr[j][k] != 1) {
                            pq.push(x + j + k + 2);
                        }
                    }
                }
                while (pq.empty() == false && a > 0) {
                    b = pq.top();
                    pq.pop();
                    a--;
                }

                cout << b << '\n';
            }
        }
    }
}