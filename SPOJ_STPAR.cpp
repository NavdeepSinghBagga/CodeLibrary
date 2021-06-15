#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

    int t, inp;
    stack <int> S1, S2;
    cin >> t;
    while (t) {
        int flag = 1;
        for (int i = 0; i < t; i++) {
            cin >> inp;
            while (!S1.empty() && S1.top() < inp) {
                S2.push(S1.top());
                S1.pop();
            }
            S1.push(inp);

        }
        while (!S1.empty()) {
            S2.push(S1.top());
            S1.pop();
        }
        inp = S2.top();
        S2.pop();
        while (!S2.empty()) {
            if (inp < S2.top())
                flag = 0;
            inp = S2.top();
            S2.pop();
        }

        if (flag)    cout << "yes\n";
        else        cout << "no\n";
        cin >> t;
    }
}