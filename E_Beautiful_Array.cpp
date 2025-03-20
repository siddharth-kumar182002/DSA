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

sort(arr.begin(),arr.end());
vector<long long> dp(n+1,1e16);
//dp[i]==minimum number of operatopn to make array beatifull;
dp[0]=0;
dp[1]=0;
long long f=0;
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;
for (int i = 2; i <=n; i++)
{
    if(i%2==0){
         if((arr[i-1]-arr[i-2])%k==0 && dp[i-2]!=1e16){
            long long x=(arr[i-1]-arr[i-2])/k;
                  dp[i]=min(dp[i],dp[i-2]+(k*x));
         }
    }
    else{
        if(dp[i-1]!=1e16){
              dp[i]=min(dp[i],dp[i-1]);
        }
        
         if((arr[i-1]-arr[i-2])%k==0 && dp[i-2]!=1e16){
            long long x=(arr[i-1]-arr[i-2])/k;
                  dp[i]=min(dp[i],dp[i-2]+(k*x));
         }
    }
}

    cout<<dp[n]<<endl;



}
return 0;
}