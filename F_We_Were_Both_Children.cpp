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
vector<long long> count(n+1,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]<=n){
    count[arr[i]]++;
    }
}
vector<long long> dp(n+1,0);
long long maxi=0;
for (int i = n; i >=1; i--)
{
    for (int j = i; j <=n; j=j+i)
    {
        dp[j]=dp[j]+count[i];
        maxi=max(maxi,dp[j]);
    }
}
/*
for (int i=1; i < n; i++)
{
    cout<<dp[i]<<endl;
}*/
cout<<maxi<<endl;
}
return 0;
}