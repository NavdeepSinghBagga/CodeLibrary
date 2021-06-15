#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int s;
    int tm;
    char mov;
    long long total = 0;
    while (t--) {
        int arr[4][4] = {0};
        cin >> s;
        for (int i = 0; i < s; i++) {
            cin >> mov >> tm;
            if (tm == 12)
                tm = 0;
            else if (tm == 3)
                tm = 1;
            else if (tm == 6)
                tm = 2;
            else if (tm == 9)
                tm = 3;
            arr[mov - 65][tm]++;
        }
        /*for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }*/
        int visarr[4][4] = {0};
        int vism[4] = {0};
        int minv, mini, minj;
        long long sum = 0;
        int zct = 0, fct = 4;
        for (int k = 0; k < 4; k++) {
            minv = 0; mini = 0; minj = 0;
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if ( visarr[i][j] == 0 && arr[i][j] > minv) {
                        mini = i; minj = j; minv = arr[i][j];
                    }
                }
            }
            //visarr[mini][minj];
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if ( minv != 0 && (mini == i || minj == j) ) {
                        visarr[i][j] = 1;
                    }
                }
            }
            if (minv != 0)
                vism[mini] = minv;

        }
        sort(vism, vism + 4, greater<int>());
        /*for(int i=0;i<4;i++)
            cout<<vism[i]<<" ";*/
        for (int i = 0; i < 4; i++) {
            if (vism[i] == 0)
                zct++;
            else {
                sum += (25 * fct--) * vism[i];
            }
        }
        sum = sum - zct * 100;
        cout << sum << "\n";
        total += sum;

    }
    cout << total << "\n";
}
