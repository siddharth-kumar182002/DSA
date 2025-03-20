#include <bits/stdc++.h>
using namespace std;


vector<int> tree[50001];
int dp1[50001][501], dp2[50001][501];

void dfs(long long src,long long par,long long k){


    for(auto x:tree[src]){

        if(x!=par){
            dfs(x,src,k);
        }

        }

         
        dp1[src][0]=1;
        for (int i = 1; i <=k; i++)
        {
                  dp1[src][i] = 0;
            for(auto y:tree[src]){
                dp1[src][i]+=(dp1[y][i-1]);
            }
        }
        
    
        
    
}


void solve(long long src,long long par,long long k){

for (int i = 0; i <=k; i++)
{
    dp2[src][i]=dp1[src][i];
}


if(par!=0){

dp2[src][1]+=dp2[par][0];
for (int i = 2; i <=k; i++)
{
    dp2[src][i]+=dp2[par][i-1];
    dp2[src][i]-=dp1[src][i-2];
}


}


for(auto x:tree[src]){
    if(x!=par){
        solve(x,src,k);
    }
}


}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,k;
cin>>n>>k;

for(int i=0;i<(n-1);i++){
    long long u,v;
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
}


dfs(1,0,k);
solve(1,0,k);


// for(int i=0;i<10;i++){
//     for(int j=0;j<5;j++){
//         cout<<dp1[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;


long long ans=0;
for (int i = 1; i <=n; i++)
{
    ans+=(dp2[i][k]);
}
cout<<(ans/2)<<endl;
return 0;
}