#include <bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
int main() {
long long n;
cin>>n;
vector<long long > dp(1e6,0);
dp[0]=1;
for (int i = 1; i <=dp.size(); i++)
{
    for (int j = 1;j <=6; j++)
    {
        if(i-j>=0){
        dp[i]=(dp[i]+dp[i-j])%m;
        }
    }
    
}
cout<<dp[n]<<endl;

return 0;
}