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
vector<long long> sum(n+1,0);
for (int i = 1; i <=n; i++)
{
    sum[i]=sum[i-1]+arr[i-1];
}
map<long long,long long> mp; 
for (int i = 0; i <=n; i++)
{
   //cout<<sum[i]<<" ";
    mp[sum[i]]=-1;
}
//cout<<endl;
mp[0]=0;
vector<long long> dp(n+1,0);
for (int i = 1; i <=n; i++)
{
    long long x=mp[sum[i]];
    if(x==-1){
        dp[i]=dp[i-1];
        
    }
    else{

            dp[i]=max(dp[i-1],(dp[x])+1);
         
    }
     mp[sum[i]]=i;
}

cout<<dp[n]<<endl;




}
return 0;
}