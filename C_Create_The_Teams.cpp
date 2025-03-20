#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
// for(auto x: arr){
//     cout<<x<<" ";
// }
// cout<<endl;
vector<long long> dp(n+1,0);

//dp[i]==maximum teams i can form taking ith element as minimum;
long long maxi=0;
for (int i = n-1; i>=0; i--)
{
   long long temp=x/arr[i];
   if(x%arr[i]!=0){
    temp++;
   }
   if(i+temp<=n){
   dp[i]=1+dp[i+temp];
   }
   //cout<<dp[i]<<" ";
   maxi=max(maxi,dp[i]);
}
// cout<<endl;
cout<<maxi<<endl;


}
return 0;
}
