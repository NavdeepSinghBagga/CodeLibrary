#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        long long counting = 0;
        for (long long i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == 'x') {
                if (str[i + 1] == 'y') {
                    counting += 1;
                    i += 1;
                }
            }
            else if (str[i] == 'y') {
                if (str[i + 1] == 'x') {
                    counting += 1;
                    i += 1;
                }
            }
        }
        cout << counting << endl;
    }
    return 0;
}
