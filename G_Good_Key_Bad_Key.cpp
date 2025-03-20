#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<vector<long long> > dp(n+1,vector<long long> (32,INT64_MIN));
//dp[i]=maxm number of coins after opening i chests;
dp[0][0]=0;
for (int i = 1; i <=n; i++)
{
    for (int j = 0; j <=min(i,31); j++)
    {
        if(j==0){
            dp[i][j]=dp[i-1][j]+arr[i-1]-k;
           //  cout<<"i="<<i<<" "<<"j="<<j<<endl;
       // cout<<dp[i][j]<<endl;
            continue;
        }
        long long a=dp[i-1][j-1]+(arr[i-1]/(1<<j));
        dp[i][j]=max(dp[i][j],a);
        long long b=INT64_MIN;
        if(i-1>=j){
            long long c=dp[i-1][j]+(arr[i-1]/(1<<j))-k;
            b=max(b,c);
        }
        dp[i][j]=max(dp[i][j],b);
       // cout<<"i="<<i<<" "<<"j="<<j<<endl;
       // cout<<dp[i][j]<<endl;
    }
    
}
//we have to take maxi of dp[i][j] because it can happen that we used 31 keys before reaching nth element and we get a maximum;

long long ans=INT64_MIN;
for (int i = 0; i <=31; i++)
{
    for (int j = 0; j <=n; j++)
    {
        ans=max(ans,dp[j][i]);
    }
}
cout<<ans<<endl;

}
return 0;
}