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
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
vector<long long> dp(n,0);
dp[0]=0;
dp[1]=0;
long long ans=0;
sort(arr.begin(),arr.end());
for (int i = 0; i < n; i++)
{
    long long a=0;
    long long b=0;
    if(i>=2){
        a=arr[i]-arr[i-2];
        b=(dp[i-1]+(i-2)*(arr[i]-arr[i-1]));
    }
    dp[i]=a+b;
    ans=ans+(a+b);

}

cout<<-1LL*(ans)<<endl;
}
return 0;
}