#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,x;
cin>>n>>x;
vector<long long > coins(n);
for (int i = 0; i < n; i++)
{
    cin>>coins[i];
}
long long inf=1e7;
vector<long long> dp(x+1,inf);
dp[0]=0;
for (int i = 1; i < dp.size(); i++)
{
    for(auto coin:coins){
        if(i-coin>=0){
            dp[i]=min(dp[i],dp[i-coin]+1);
        }
    }
}
if(dp[x]==1e7){
    cout<<-1<<endl;
}
else{
    cout<<dp[x]<<endl;
}

return 0;
}