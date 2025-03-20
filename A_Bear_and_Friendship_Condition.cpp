#include <bits/stdc++.h>
using namespace std;
void dfs(long long node,long long &count,long long &edges,vector<long long> &vis,vector<long long> graph[] ){
    vis[node]=1;
    edges+=graph[node].size();
    for(auto x:graph[node]){
        if(!vis[x]){
            count++;
            dfs(x,count,edges,vis,graph);
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

vector<long long> vis(n+1,0);
long long count=0;
long long edges=0;
vector<long long> c;
long long f=0;
for (int i = 1; i <=n; i++)
{
    count=0;
    edges=0;
    if(!vis[i]){
        count=1;
        dfs(i,count,edges,vis,graph);
        c.push_back(count);
    }
    if(edges!=((count*(count-1)))){
       // cout<<i<<endl;
       // cout<<edges<<endl;
        cout<<"NO"<<endl;
        f=1;
        break;
    }
}
if(f!=1){
cout<<"YES"<<endl;
}

return 0;
}