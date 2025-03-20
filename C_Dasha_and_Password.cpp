#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
  int n, m;
  cin >> n >> m;
  int dp[n][3];
  for (int i = 0; i < n; i++)
    dp[i][0] = dp[i][1] = dp[i][2] = 1000000007;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
      if (isdigit(s[j]))
        dp[i][2] = min(dp[i][2], min(j, m - j));
      else if (isalpha(s[j]))
        dp[i][1] = min(dp[i][1], min(j, m - j));
      else
        dp[i][0] = min(dp[i][0], min(j, m - j));
    }
  }

 

  int ans = 1000000009;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      for (int k = 0; k < n; k++){
        if(i!=j && j!=k && k!=i){
          ans = min(ans, dp[i][0] + dp[j][1] + dp[k][2]);
        }
      }
    }
  }
  return cout << ans, 0;

return 0;
}