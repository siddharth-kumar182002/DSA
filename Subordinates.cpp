#include <bits/stdc++.h>
using namespace std;

void dfs(long long node,vector<long long> &vis,vector<long long> &ans,vector<vector<long long> > &g){

    vis[node]=1;
long long x=0;
    for(auto child:g[node]){
         if(!vis[child]){
        dfs(child,vis,ans,g);
         x+=(1+ans[child]);
         }
    }

    ans[node]=x;

}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<vector<long long>> g(n+1);
for (int i = 2; i <=n; i++)
{
    long long x;
    cin>>x;
    g[x].push_back(i);
    g[i].push_back(x);
}

vector<long long > vis(n+1,0);

vector<long long> ans(n+1,0);

dfs(1,vis,ans,g);

for(int i=1;i<=n;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}