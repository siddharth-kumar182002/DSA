#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main() {
long long n;
cin>>n;
vector<string> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}

vector<vector<long long >> dp(n,vector<long long> (n));
if(arr[0][0]=='*'){
dp[0][0]=0;
}
else{
    dp[0][0]=1;
}
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i==0 && j==0){
            continue;
        }
        if(arr[i][j]=='*'){
               dp[i][j]=0;
        }
        else{
              long long right=0;
              long long left=0;
        if(j-1>=0){
             right=dp[i][j-1];
        }
        if(i-1>=0){
         left=dp[i-1][j];
        }
       // cout<<"r="<<right<<endl;
        dp[i][j]=(right+left)%mod;
        }
    }
    
}
cout<<dp[n-1][n-1]<<endl;

return 0;
}