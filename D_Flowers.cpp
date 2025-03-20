#include <bits/stdc++.h>
using namespace std;
const long long n=1e5;
const long long mod=1e9+7;
int main() {
int t,k;
cin>>t>>k;
vector<long long> dp(n+1,0);
vector<long long > p(n+1,0);
dp[0]=0;
for (int i = 1; i < k; i++)
{
    dp[i]=1;
}
dp[k]=2;

for (int i = k+1; i <=n; i++)
{
    dp[i]=((dp[i-1])+(dp[i-k]))%mod;
}
//cout<<dp[4]<<endl;
partial_sum(dp.begin(),dp.end(),p.begin());

while(t--){
    long long a,b;
    cin>>a>>b;

    long long ans=(p[b]-p[a-1])%mod;
    if(ans<0){
        ans=(ans+mod)%mod;

    }
    cout<<ans<<endl;
}

return 0;
}