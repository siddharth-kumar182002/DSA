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
vector<long long> arr1(n);
for (int i = 0; i <n; i++)
{
      cin>>arr[i];
       arr1[i]=arr[i];
}

sort(arr.begin(),arr.end());

vector<long long> sum(n+1,0); 
for (int i = 1; i < n; i++)
{
    sum[i]=sum[i-1]+arr[i-1];
}

vector<long long> dp(n,0);

for (int i = 0; i < n-1; i++)
{
    if(sum[i+1]<arr[i+1]){
        dp[i]=1;
    }
}
dp[n-1]=1;
/*
for(auto x:dp){
    cout<<x<<" ";
}
cout<<endl;
*/
for (int i = n-1; i >=0 ; i--)
{
    if(dp[i]==1){
          continue;
    }
    else{
        dp[i]=dp[i+1]+1;
    }
}
/*
for(auto x:dp){
    cout<<x<<" ";
}
cout<<endl;*/

for (int i = 0; i < n; i++)
{
    long long x=arr1[i];

    long long ind=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    cout<<ind+(dp[ind]-1)<<" ";
}

cout<<endl;






}
return 0;
}