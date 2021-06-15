#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> stk;
    stack <int> stk2;
    queue <int> que;
    queue <int> que2;
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int d;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> d;
            stk.push(d);
        }
        d = stk.top();
        stk.pop();
        while (!stk.empty() && stk.top() >= d) {
            que.push(d);
            d = stk.top();
            stk.pop();
        }
        if (stk.empty())
            cout << "-1\n";
        else {
            que.push(d);
            d = stk.top();
            stk.pop();
            while (!stk.empty()) {
                stk2.push(stk.top());
                stk.pop();
            }
            while (!stk2.empty()) {
                cout << stk2.top();
                stk2.pop();
            }

            while (!que.empty() && que.front() <= d ) {
                que2.push(que.front());
                que.pop();
            }

            cout << que.front();
            que.pop();
            while (!que2.empty()) {
                cout << que2.front();
                que2.pop();
            }
            cout << d;
            while (!que.empty()) {
                cout << que.front();
                que.pop();
            }
            cout << "\n";
        }
    }
}