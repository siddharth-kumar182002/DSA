#include <bits/stdc++.h>
using namespace std;
 
void solve(long long node,long long par,vector<vector<long long>> &dp,vector<vector<pair<long long,long long>>> &g){
 
 
if(g[node].size()==1 && par!=-1 || (g[node].size()==0)){
    return;
}
 
for(auto x:g[node]){
    if((x.second)!=par){
    
        solve(x.second,node,dp,g);
    }
}
 
vector<long long> prf;
vector<long long> suf;
for(auto x:g[node]){
    if((x.second)==par){
        continue;
    }
    dp[node][0]+=2*(x.first)+dp[x.second][0];
    prf.push_back(2*x.first+max(dp[x.second][0],dp[x.second][1]));
    suf.push_back(2*x.first+max(dp[x.second][0],dp[x.second][1]));
}
 
for (int i = 1; i < prf.size(); i++)
{
    prf[i]+=prf[i-1];
}
 
for (int i = suf.size()-2; i>=0; i--)
{
    suf[i]+=suf[i+1];
}
 

 
long long count=0;
 long long ch=1e16;
for(auto x:g[node]){
    if((x.second)==par){
        continue;
    }
    long long left;
    long long right;
    if(count==0){
        left=0;
    }
    else{
        left=prf[count-1];
    }
    if(count==(suf.size()-1)){
        //cout<<"HHIH"<<endl;
        right=0;
    }
    else{
        right=suf[count+1];
    }
        //   cout<<"x="<<x.second<<endl;
        //   cout<<"left="<<left<<" "<<right<<endl;
    ch=min(ch,(x.first+left+right+dp[x.second][1]));
    count++;
}
dp[node][1]=ch;
 
// cout<<"NOde="<<node<<endl;
// cout<<dp[node][0]<<" "<<dp[node][1]<<endl;
 
}
 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<vector<pair<long long,long long>>> g(n+1);
for (int i = 1; i <n; i++)
{
    long long a,b,c;
    cin>>a>>b>>c;
    g[a].push_back({c,b});
    g[b].push_back({c,a});
}
 
vector<vector<long long>> dp(n+1,vector<long long> (2,0));
 
solve(1LL,-1LL,dp,g);
 
 
// for (int i = 1; i <=n; i++)
// {
//     cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
// }
 
cout<<min(dp[1][0],dp[1][1])<<endl;
 
return 0;
}