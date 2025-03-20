#include <bits/stdc++.h>
using namespace std;
void dfs(long long node,long long &count,vector<long long> &vis,vector<long long> graph[] ){
    vis[node]=1;
    for(auto x:graph[node]){
        if(!vis[x]){
            count++;
            dfs(x,count,vis,graph);
        }
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,p;
cin>>n>>p;
vector<long long> graph[n];
for (int i = 0; i < p; i++)
{
      long long a,b;
      cin>>a>>b;
      graph[a].push_back(b);
      graph[b].push_back(a);
}

vector<long long> vis(n,0);
long long count=0;
vector<long long> c;
for (int i = 0; i <n; i++)
{
    count=0;
    if(!vis[i]){
        count=1;
        dfs(i,count,vis,graph);
        c.push_back(count);
    }
}
long long ans=(n*(n-1))/2;
for (int i = 0; i < c.size(); i++)
{
    ans=ans-(c[i]*(c[i]-1))/2;
}
cout<<ans<<endl;

return 0;
}