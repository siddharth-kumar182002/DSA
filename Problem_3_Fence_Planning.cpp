#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream cin("fenceplan.in");
    long long n, m;
    cin >> n >> m;
    vector<long long> xc(n + 1);
    vector<long long> yc(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> xc[i] >> yc[i];
    }

    vector<vector<long long>> adjl(n + 1);

    for (int i = 0; i < m; i++)
    {
        long long c1, c2;
        cin >> c1 >> c2;
        //cout<<c1<<" "<<c2<<endl;
        adjl[c1].push_back(c2);
        adjl[c2].push_back(c1);
    }

    /*for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < adjl[i].size(); j++)
        {
            cout<<adjl[i][j]<<" ";
        }
        cout<<endl;
        
    }*/
    

    vector<long long> vis(n + 1, 0);
    long long ans = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            long long minix = INT_MAX;
            long long miniy = INT_MAX;
            long long maxix = INT_MIN;
            long long maxiy = INT_MIN;
            vis[i] = 1;
            queue<long long> conn;
            conn.push(i);
            while (!conn.empty())
            {
                long long c = conn.front();
                conn.pop();

                for (auto x : adjl[c])
                {
                    if (!vis[x])
                    {
                        vis[x] = 1;
                        conn.push(x);
                    }
                }
                minix = min(minix, xc[c]);
                miniy = min(miniy, yc[c]);
                maxix = max(maxix, xc[c]);
                maxiy = max(maxiy, yc[c]);
               //  cout<<"minix="<<minix<<endl;
                //cout << c << " ";
            }
            cout << endl;
            ans = min(ans, 2 * (maxix - minix) + 2 * (maxiy - miniy));
        }
    }
    ofstream cout("fenceplan.out");
    cout << ans << endl;

    return 0;
}