#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main() {
long long n,m;
cin>>n>>m;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<vector<long long >> dp(n,vector<long long> (m+2,0));

if(arr[0]==0){
    for (int i = 1; i <=m; i++)
    {
        dp[0][i]=1;
    }
    
}
else{
    dp[0][arr[0]]=1;
}

for (int i = 1; i < n; i++)
{
    if(arr[i]==0){
    for (int j = 1; j <=m; j++)
    {
        
        dp[i][j]=(dp[i-1][j]+dp[i-1][j-1]+dp[i-1][j+1])%mod;
        
    }
    }
    else{
        dp[i][arr[i]]=(dp[i-1][arr[i]]+dp[i-1][arr[i]-1]+dp[i-1][arr[i]+1])%mod;
    }
    
}
long long ans=0;
for (int i = 1; i <=m ;i++)
{
    ans=(ans+dp[n-1][i])%mod;
}

cout<<ans<<endl;
return 0; 
}