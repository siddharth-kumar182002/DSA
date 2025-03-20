#include <bits/stdc++.h>
using namespace std;
bool iscycle;
void dfs(long long node,long long par,vector<long long> &vis,vector<long long> &deg,vector<long long> graph[]){
    vis[node]=1;
  if(deg[node]!=2){
            iscycle=false;
        }
       // cout<<"in"<<node<<endl;
    for(auto it:graph[node]){
        if(!vis[it]){
        dfs(it,node,vis,deg,graph);
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
vector<long long> deg(n+1,0);
for (int i = 0; i < m; i++)
{
    long long u,v;
    cin>>u>>v;
    deg[u]++;
    deg[v]++;
    graph[u].push_back(v);
    graph[v].push_back(u);
}

vector<long long> vis(n+1,0);
long long f=0;
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
        iscycle=true;
        //cout<<"start"<<i<<endl;
        dfs(i,-1,vis,deg,graph);
        if(iscycle){
            f++;
           // cout<<"hihi"<<endl;
        }
    }
}
cout<<f<<endl;


return 0;
}