#include <bits/stdc++.h>
using namespace std;
int main() {
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


vector<vector<long long >> dp(n,vector<long long> (2,1e9));
dp[0][0]=arr[0];
dp[0][1]=arr[0];
for (int i = 1; i<n; i++)
{

dp[i][1]=min(dp[i][1],dp[i-1][0]);
 dp[i][0]=min(dp[i][0],dp[i-1][1]+arr[i]);

 if(i-2>=0){
 dp[i][0]=min(dp[i][0],dp[i-2][1]+arr[i]+arr[i-1]);
dp[i][1]=min(dp[i][1],dp[i-2][0]);
 }
 

}
cout<<min(dp[n-1][0],dp[n-1][1])<<endl;
}
return 0;
}