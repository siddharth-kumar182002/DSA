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

vector<long long > dp(n+1,-1e10);
if(n%2==0){
    dp[2]=max(arr[n/2],arr[(n/2)-1]);
}
else{
    dp[1]=arr[n/2];
}
long long f=n/2-1;
long long l=(n/2);
for (int i = 4; i <=n; i=i+2)
{
    f=f-1;
    l=l+1;

    dp[i]=max(dp[i],dp[i-2]+arr[f]);
    dp[i]=max(dp[i],dp[i-2]+arr[l]);
}
cout<<dp[n]<<endl;


return 0;
}