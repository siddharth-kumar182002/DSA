#include <bits/stdc++.h>
using namespace std;

void dfs(long long node,vector<long long> &vis,vector<long long> &mini,vector<vector<long long>> &g,vector<long long> &arr){
vis[node]=1;
//cout<<node<<endl;
if(g[node].size()==1 && vis[g[node][0]]){
    mini[node]=arr[node];
   // cout<<"node"<<node<<endl;
    //cout<<"min"<<mini[node]<<endl;
    return ;
}

long long m=1e9;
for(auto x:g[node]){
    if(vis[x]!=1){
 dfs(x,vis,mini,g,arr);
 // cout<<"in"<<x<<endl;
m=min(m,mini[x]);
    }
  
}
//cout<<"nodeout"<<node<<" "<<m<<endl;
if(arr[node]>=m){
    mini[node]=m;
    return;
}
else{
  //  cout<<"nodein"<<node<<endl;
mini[node]=(m+arr[node])/2;
    return;
}


}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
vector<long long> par(n,0);
vector<vector<long long>> g(n);
for (int i = 1; i <n; i++)
{
    long long x;
    cin>>x;
    par[i]=x;
    g[i].push_back(x-1);
     g[x-1].push_back(i);
}


// for(auto x:g){
//     for(auto y:x){
//         cout<<y<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;
vector<long long> mini(n,0);
vector<long long> vis(n,0);
dfs(0*1LL,vis,mini,g,arr);


// for(auto x:mini){
//     cout<<x<<" ";
// }
// cout<<endl;
long long ans=arr[0];
long long mint=1e9;
for(auto x:g[0]){
    mint=min(mint,mini[x]);
}
cout<<(ans+mint)<<endl;

}
return 0;
}