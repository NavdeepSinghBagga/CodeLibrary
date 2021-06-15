#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        bool a[100], p = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (a[i] && i + 5 >= n) {
                for (int j = i + 1; j < n; j++)
                    if (a[j]) {p = 0; break;}
                break;
            }
            if (a[i]) {
                if (a[i + 1] | a[i + 2] | a[i + 3] | a[i + 4] | a[i + 5]) {
                    p = 0;
                    break;
                }
                i = i + 5;
            }
        }
        if (p)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
