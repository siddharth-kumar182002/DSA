#include <bits/stdc++.h>
using namespace std;
long long n=1e5+6;
vector<long long > l(n),r(n);
vector<vector<long long>> dp(n,vector<long long> (2));
vector<vector<long long>> adj(n); 
void dfs(long long u,long long p)
{
    for (auto v:adj[u]){
        if (v == p)continue;
        dfs(v,u);
    }
 
    for (auto v:adj[u]){
        if (v == p)continue;
        dp[u][0] += max(abs(l[u] - l[v]) + dp[v][0],abs(l[u] - r[v]) + dp[v][1]);
        dp[u][1] += max(abs(r[u] - l[v]) + dp[v][0],abs(r[u] - r[v]) + dp[v][1]);
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
    cin>>n;
for (int i = 1; i <=n; i++)
{
    adj[i].clear();
    dp[i][0]=0;
    dp[i][1]=0;
}

    for (int i = 1; i <=n; i++)
    {
        cin>>l[i];
        cin>>r[i];
    }
    for (int i = 1; i < n; i++)
    {
        long long u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,-1);

    cout<<max(dp[1][0],dp[1][1])<<endl;
    
    
}
return 0;
}