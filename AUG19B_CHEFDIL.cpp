#include <iostream>
#include <string>
using namespace std;


int main()
{
    unsigned int t, len, score;
    int i, j;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        len = s.size();
        for (i = 0; i < len; i++) {
            if (s[i] == '1') {
                if ( i - 1 >= 0 && s[i - 1] != '2') {
                    if (s[i - 1] == '0')
                        s[i - 1] = '1';
                    else
                        s[i - 1] = '0';
                }
                if (i + 1 < len && s[i + 1] != '2') {
                    if (s[i + 1] == '0')
                        s[i + 1] = '1';
                    else
                        s[i + 1] = '0';
                }
                s[i] = '2';
                i = -1;
            }
        }
        score = 1;
        for (i = 0; i < len; i++) {
            if (s[i] == '0') {
                score = 0;
                cout << "LOSE" << endl;
                break;
            }
        }
        if (score == 1)
            cout << "WIN" << endl;
    }
}