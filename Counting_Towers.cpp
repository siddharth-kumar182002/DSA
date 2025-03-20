#include <bits/stdc++.h>
using namespace std;
const long long n=1e6+10;
const long long mod=1e9+7;

int main() {
vector<vector<long long >> dp(n,vector<long long>(2,0));

dp[1][0]=1;
dp[1][1]=1;
for (int i = 2; i < n; i++)
{
    dp[i][0]=(2*dp[i-1][0]+dp[i-1][1])%mod;
    
    dp[i][1]=(4*dp[i-1][1]+dp[i-1][0])%mod;
}



int t;
cin>>t;
while(t--){
    long long h;
    cin>>h;

cout<<(dp[h][0]+dp[h][1])%mod<<endl;
}
return 0;
}