#include <bits/stdc++.h>
using namespace std;
long long dfs(long long i,vector<long long > &bribe,vector<long long > &vis,vector<long long > friends[]){

vis[i]=1;
 long long mini=bribe[i];
 
for(auto x:friends[i]){
    if(!vis[x]){
       mini=min(mini, dfs(x,bribe,vis,friends));
    }
    
}


return mini;
}
int main() {
long long n,m;
cin>>n>>m;
vector<long long> bribe(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>bribe[i];
}

vector<long long > friends[n+1];
for (int i = 0; i < m; i++)
{
    long long a,b;
    cin>>a>>b;
    friends[a].push_back(b);
    friends[b].push_back(a);

}

vector<long long> vis(n+1,0);
long long ans=0;
for (int i = 1; i <=n; i++)
{
    if(!vis[i]){
        ans=ans+dfs(i,bribe,vis,friends);
    }
}

cout<<ans<<endl;


return 0;
}