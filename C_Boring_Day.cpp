#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,l,r;
cin>>n>>l>>r;
vector<long long> arr(n+1);
arr[0]=0;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
}
// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
vector<long long> dp(n+1,0);
dp[0]=0;
for (int i = 1; i <=n; i++)
{
  
    long long it=lower_bound(arr.begin(),arr.end(),arr[i]-l)-arr.begin();
    if(arr[it]!=(arr[i]-l)){
          it--;
    }
    // cout<<"i="<<i<<endl;
    // cout<<"it="<<it<<endl;
    if(it>=0 && arr[it]>=(arr[i]-r)){
        dp[i]=max({dp[i],dp[it]+1});
    }
    
        dp[i]=max(dp[i],dp[i-1]);
    
    // cout<<"dp="<<dp[i]<<endl;
}
// for(auto x:dp){
//     cout<<x<<" ";
// }
// cout<<endl;
cout<<dp[n]<<endl;


}
return 0;
}
