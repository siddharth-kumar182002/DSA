#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,a,b,c;
cin>>n>>a>>b>>c;

vector<long long> dp(n+1,INT_MIN);
dp[0]=0;
for (int i = 1; i <=n; i++)
{
    if(i-a>=0){
        dp[i]=max(dp[i],dp[i-a]+1);
    }
    if(i-b>=0){
        dp[i]=max(dp[i],dp[i-b]+1);
    }
    if(i-c>=0){
        dp[i]=max(dp[i],dp[i-c]+1);
    }
}
cout<<dp[n]<<endl;


return 0;
}   