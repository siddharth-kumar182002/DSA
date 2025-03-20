#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    t=1;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        string b;
        cin >> b;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                v.push_back(i);
            }
        }
        vector<long long > dp(v.size()+1,1e7);
        dp[0]=0;
        dp[1]=1;
        for (int i = 2; i <=v.size(); i++)
        {
            dp[i]=min(dp[i],dp[i-1]+1);
            if(v[i-1]-v[i-2]==1 && a[v[i-1]]!=a[v[i-2]] ){
                      dp[i]=min(dp[i],dp[i-2]+1);
            }
           // cout<<dp[i]<<" ";
        }
       // cout<<endl;
        cout<<dp[v.size()]<<endl;
    }
}