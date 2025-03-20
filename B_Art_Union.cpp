#include <bits/stdc++.h>
using namespace std;
int main() {
long long m,n;
cin>>m>>n;

vector<vector<long long >> arr(m,vector<long long > (n));
vector<vector<long long >> dp(m,vector<long long > (n));
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n;j++)
    {
        cin>>arr[i][j];
    }

}
dp[0][0]=arr[0][0];

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i>0 && j==0 ){
             dp[i][j]=dp[i-1][j]+arr[i][j];
        }
        if(i==0 && j>0 ){
             dp[i][j]=dp[i][j-1]+arr[i][j];
        }
        if(i-1>=0 && j-1>=0){
        dp[i][j]=max(dp[i-1][j],dp[i][j-1])+arr[i][j];
        }
        
    }
    
}
for (int i = 0; i < m; i++)
{
    cout<<dp[i][n-1]<<" ";
}
cout<<endl;




return 0;
}