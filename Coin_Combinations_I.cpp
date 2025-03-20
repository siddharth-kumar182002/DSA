#include <bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
int main() {
long long n,s;
cin>>n>>s;
vector<long long> coins(n);
for (int i = 0; i < n; i++)
{
    cin>>coins[i];
}
long long sz=1e6+1;
vector<long long> dp(sz,0);
dp[0]=1;
for (int i = 0; i < sz; i++)
{
    for(auto coin:coins){
        if(i-coin>=0){
            dp[i]=(dp[i]+dp[i-coin])%m;
        }
    }
}
cout<<dp[s]<<endl;


return 0;
}