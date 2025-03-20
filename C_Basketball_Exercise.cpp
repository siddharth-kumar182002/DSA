#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int n;
cin>>n;
vector<long long> a0(n);
vector<long long> a1(n);
for (int i = 0; i < n; i++)
{
    cin>>a0[i];
}
for (int i = 0; i < n; i++)
{
    cin>>a1[i];
}

vector<vector<long long>> dp(n,vector<long long> (3,0));
dp[0][0]=a0[0];
dp[0][1]=a1[0];
dp[0][2]=0;
for (int i = 1; i < n; i++)
{
   dp[i][0]=max({dp[i-1][2]+a0[i],dp[i-1][1]+a0[i]});
   dp[i][1]=max({dp[i-1][2]+a1[i],dp[i-1][0]+a1[i]});
   dp[i][2]=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
}

cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;

return 0;
}