#include <bits/stdc++.h>
using namespace std;
int main() {
long long a,b;
cin>>a>>b;
vector<vector<long long >> dp(a+1,vector<long long> (b+1,1e9));
long long c=min(a,b);
for (int i = 1; i <=c; i++)
{
    dp[i][i]=0;
}

for (int i = 1; i <=a; i++)
{
    for (int j = 1; j <=b; j++)
    {
        for (int k = 1; k < i; k++)
        {
            dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
        }
         for (int k = 1; k < j; k++)
        {
            dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
        }
        
    }
    
}

cout<<dp[a][b]<<endl;



return 0;
}