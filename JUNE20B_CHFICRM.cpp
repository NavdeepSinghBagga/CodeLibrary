#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ct1 = 1, ct2 = 0;
        bool check = 1;
        if (arr[0] != 5)
            cout << "NO" << endl;
        else {
            for (int i = 1; i < n && check; i++) {
                if (arr[i] == 5)
                    ct1++;
                else if (arr[i] == 10) {
                    if (ct1) {
                        ct1--;
                        ct2++;
                    }
                    else check = 0;
                }
                else {
                    if (ct2) {
                        ct2--;
                    }
                    else if (ct1 > 1) {
                        ct1 -= 2;
                    }
                    else check = 0;
                }
            }
            if (check)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
