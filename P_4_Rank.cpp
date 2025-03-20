#include <bits/stdc++.h>
using namespace std;
bool dfs(long long i,vector<long long> &vis,vector<vector<long long>> &adjl,long long org){
 
 vis[i]=1;

 for(auto x:adjl[i]){
    if(!vis[x]){
    vis[x]=1;
    if(dfs(x,vis,adjl,org)==true){
        return true;
    }
    }
    else if(org==x){
     return true;
    }
 }
return false;

}
int main() {
long long n,m;
cin>>n>>m;

vector<vector<long long>> adjl(n+1);

for (int i = 0; i < m; i++)
{
    long long a,b,sa,sb;
    cin>>a>>b>>sa>>sb;
     if(sa>sb){
        adjl[a].push_back(b);
     }
     else{
         adjl[b].push_back(a);
     }

}


vector<long long> vis(n+1,0);
long long ans=0;
long long org;
for (int i = 1; i <=n; i++)
{
    vis.assign(n+1,0);
      org=i;
    if(dfs(i,vis,adjl,org)){
      // cout<<i<<" ";
        ans++;
    }
}
//cout<<endl;
cout<<ans<<endl;


return 0;
}