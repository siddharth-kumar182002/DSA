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
vector<long long> mp(n+1,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
}

long long ans=0;
vector<long long> dp(n+1,0);
for (int i = n; i >=1; i--)
{
    long long x=0;
    long long y=0;
    for (int j = i; j <=n; j+=i)
    {
        x+=mp[j];
        y+=dp[j];
    }
    dp[i]=(x*(x-1))/2;
    dp[i]-=y;
}

for (int i = 1; i <=n; i++)
{
    if(mp[i]){
    for (int j=i; j<=n ; j+=i)
    {
        //cout<<"in"<<j<<" "<<dp[j]<<endl;
        ans+=dp[j];
        dp[j]=0;
    }
    }
}

cout<<(n*(n-1))/2-ans<<endl;


}
return 0;
}