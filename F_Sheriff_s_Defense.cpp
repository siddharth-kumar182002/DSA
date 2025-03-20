#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> tree;
vector<vector<long long>> dp;

void dfs(long long src,long long par,vector<long long> &arr,long long c){


if((tree[src].size()==1 && par!=(-1))){
dp[src][1]=arr[src];
dp[src][0]=0;

}

long long sum=0;
for(auto x:tree[src]){
if(x!=par){
    dfs(x,src,arr,c);
    dp[src][0]+=(max(dp[x][0],dp[x][1]));
  
    
    sum+=(max((dp[x][1]-2*c),dp[x][0]));
    
  
}
}
  dp[src][1]=arr[src]+sum;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,c;

cin>>n>>c;
vector<long long> arr(n+1);
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
}
tree.assign(n+1,vector<long long>());
for (int i = 0; i < n-1; i++)
{
    long long u,v;
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
}

dp.assign(n+1,vector<long long> (2,0));
dfs(1,-1,arr,c);

cout<<max(dp[1][1],dp[1][0])<<endl;

}
return 0;
}