#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        int a = n;
        vector<int> vis(n+m+1,0);
        vector<int> ans(n + 1, -1);
        for(int i=0;i<m;i++)
        {
            int x;
            cin >> x;
            count++;

            if (vis[x] == 1)
            {
                continue;
            }

            if (a > 0)
            {
                ans[a] = count;
                a--;
            }
            vis[x]=1;
        }

        for (int i = 1; i <=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
