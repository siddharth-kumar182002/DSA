#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(1e5+1,0);
long long maxi=-1;

for (int i = 0; i < n; i++)
{
    long long k;
    cin>>k;
    maxi=max(maxi,k);
    arr[k]++;
}
vector<long long > dp(maxi+1,0);
dp[1]=arr[1];

for (int i = 2; i <=maxi; i++)
{
    dp[i]=max(dp[i-1],dp[i-2]+arr[i]*i);
}

cout<<dp[maxi]<<endl;
return 0;
}