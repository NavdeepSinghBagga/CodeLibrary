#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<long long> v;
        long long n, i, k, inp;
        cin >> n >> k;
        for (i = 0; i < n; i++)
        {
            cin >> inp;
            v.push_back(inp);
        }
        inp = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] > k)
                inp = inp + (v[i] - k);
        }
        cout << inp << endl;
    }
    return 0;
}
