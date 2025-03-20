#include <bits/stdc++.h>
using namespace std;
long long nod=0;
long long dfs(long long node,vector<long long> graph[],vector<long long> &vis){
    vis[node]=1;
    nod++;
       long long e=0;
    for(auto x : graph[node]){
        if(!vis[x]){
           e=e+1+dfs(x,graph,vis);
        }
        else{
            e=e+1;
        }
    }
    return e;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m,k;
cin>>n>>m>>k;
vector<long long> crr(k);
for (int i = 0; i < k; i++)
{
    cin>>crr[i];
}

vector<long long > graph[n+1];

for (int i = 0; i <m; i++)
{
    long long a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
}

vector<long long> vis(n+1,0);
long long ans=0;
long long maxi=-1;
for (int i = 0; i <k; i++)
{
    nod=0;
    long long edges=dfs(crr[i],graph,vis);
    edges=edges/2;
    maxi=max(maxi,nod);
    ans=ans+((nod*(nod-1))/2)-edges;
}
//cout<<"maxi="<<maxi<<endl;
//cout<<ans<<endl;

for (int i = 1; i <=n; i++)
{
    
    nod=0;
    if(!vis[i]){
       // cout<<"hi="<<i<<endl;
        long long edg=dfs(i,graph,vis);
        edg=edg/2;
      ans=ans+((nod*(nod-1))/2)-edg;
      ans=ans+nod*maxi;
      maxi=maxi+nod;
    }
}
cout<<ans<<endl;



return 0;
}