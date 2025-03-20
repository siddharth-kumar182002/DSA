#include <bits/stdc++.h>
using namespace std;
void dfs(long long i,long long j,vector<vector<long long>> &vis,vector<string> &graph){
    vis[i][j]=1;
    long long n=graph.size();
    long long m=graph[0].size();
//cout<<"i="<<i<<" "<<"j="<<j<<endl;
    long long row[4]={-1,0,1,0};
    long long col[4]={0,1,0,-1};
    for (int k = 0; k <4 ; k++)
    {
        long long newr=i+row[k];
        long long newc=j+col[k];

        if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && graph[newr][newc]=='.'){
            dfs(newr,newc,vis,graph);
        }
    }
    return;
    
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<string> graph(n);
for (int i = 0; i < n; i++)
{
    cin>>graph[i];
}
vector<vector<long long>> vis(n,vector<long long> (m,0));
long long ans=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(!vis[i][j] && graph[i][j]=='.'){
           // cout<<"hello"<<endl;
            ans++;
            dfs(i,j,vis,graph);
        }
    }
    
}
cout<<ans<<endl;

return 0;
}