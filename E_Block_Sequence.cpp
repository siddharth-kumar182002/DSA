#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> dp(n+1,0);
dp[n-1]=1;

for (int i = n-2; i >=0 ; i--)
{
    dp[i]=dp[i+1]+1;
    if(i+arr[i]+1<=n){
        dp[i]=min(dp[i],dp[i+1+arr[i]]);
    }
}
cout<<dp[0]<<endl;
}
return 0;
}