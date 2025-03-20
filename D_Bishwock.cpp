#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

    string S0,S1;
    cin >> S0 >> S1;
    int n=S0.length();
    vector<long long > sum(n+1,0);
    vector<long long> dp(n+1,INT_MIN);

    for(int i=1;i<=n;i++){
         sum[i]=sum[i-1]+(S0[i-1]=='X')+(S1[i-1]=='X');
    }
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(i>=2 && sum[i]-sum[i-2]<=1) dp[i]=max(dp[i],dp[i-2]+1);
        if(i>=3 && sum[i]-sum[i-3]==0) dp[i]=max(dp[i],dp[i-3]+2);
    }
    cout << dp[n] << '\n';

return 0;
}