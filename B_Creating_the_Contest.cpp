#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long> dp(n+1,1);
dp[0]=0;
long long maxi=1;
//cout<<double(arr[2]/2);
for (int i = 2; i <=n; i++)
{
    
if((arr[i-2])>=(arr[i-1]/2.0)){
    dp[i]=max(dp[i],dp[i-1]+1);
}
    //cout<<"i="<<i<<" "<<"dp="<<dp[i]<<endl;
    maxi=max(maxi,dp[i]);
}


cout<<maxi<<endl;


return 0;
}