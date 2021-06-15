#include <bits/stdc++.h>

using namespace std;
#define int long long int
long long ones, previous, prod;
vector< int > v[100005];
void bfs(int s, bool *visited) {
    queue<int> q;
    q.push(s);
    visited[s] = true;

    int vert, i;
    while (!q.empty()) {
        vert = q.front();
        ones++;
        q.pop();
        for (auto it : v[vert]) {
            if (visited[it] == 0) {
                q.push(it);
                visited[it] = true;
                //ones++;
            }
        }
    }
    /*for(i=1;i<11;i++){
        cout<<visited[i]<<" ";
    }*/
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, e, r, count = 0, i;
        cin >> n >> m;
        for (i = 0; i < m; i++) {
            cin >> e >> r;
            v[e].push_back(r);
            v[r].push_back(e);
        }
        bool visited[100005] = {false};
        /*cout<<endl<<endl;
        for(int i=1;i<=n;i++){
            for(auto it:v[i])
                cout<<it<<" ";
            cout<<endl;
        }*/
        prod = 1;
        for (i = 1; i <= n; i++) {
            if (visited[i] == false) {
                count++;
                ones = 0;
                bfs(i, visited);
                //    cout<<"\t"<<i<<" "<<ones<<" "<<prod<<endl;
                prod = (prod * ones) % 1000000007;
            }
            //cout<<endl;
        }//bfs(v);
        for (i = 1; i <= n; i++) {
            v[i].clear();
        }
        cout << count << " " << (prod % 1000000007) << endl;
    }
    return 0;
}