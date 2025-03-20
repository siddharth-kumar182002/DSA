#include <bits/stdc++.h>
using namespace std;
void dfs(long long node,vector<long long> graph[], vector<long long> &vis){
    vis[node]=1;
    for(auto it : graph[node]){
        if(!vis[it]){
            dfs(it,graph,vis);
        }
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<long long> graph[n+1];

for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
}

vector<long long> ans; 
vector<long long> vis(n+1,0);
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
        dfs(i,graph,vis);
        ans.push_back(i);
    }

}
cout<<(ans.size()-1)<<endl;
for (int i = 1; i <ans.size(); i++)
{
    cout<<ans[0]<<" "<<ans[i]<<endl;
}



return 0;
}