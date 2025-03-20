#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n=s.size();
long long dp[n+1][2];

    dp[0][0] = 0;
    dp[0][1] = 0;
    long long ans = 0;
    for(long long i = 1 ; i <= n; ++i){
        if(s[i-1] == '?'){
            dp[i][0] = dp[i-1][1] + 1LL;
            dp[i][1] = dp[i-1][0] + 1LL;
        }else if(s[i-1] == '0'){
            dp[i][0] = dp[i-1][1] + 1LL;
            dp[i][1] = 0;
        }else if(s[i-1] == '1'){
            dp[i][1] = dp[i-1][0] + 1LL;
            dp[i][0] = 0;
        }
        ans += max(dp[i][0] ,  dp[i][1]);
    }

    cout << ans << endl;
}
return 0;
}