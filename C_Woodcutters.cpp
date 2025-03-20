#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
const int N = 1e5 + 5;
const int inf = 1e9 + 5;

int n, x[N], h[N];
int dp[N][3];
 cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> h[i];
    for (int i = 1; i <= n; i++) 
        for (int j = 0; j < 3; j++) 
            dp[i][j] = -inf;
            
    x[0] = h[0] = -inf;
    
    for (int i = 1; i <= n; i++) {
        // If tree i is not cut
        dp[i][0] = max(dp[i][0], dp[i - 1][0]);
        dp[i][0] = max(dp[i][0], dp[i - 1][1]);
        if (x[i - 1] + h[i - 1] < x[i]){
            dp[i][0] = max(dp[i][0], dp[i - 1][2]);
        }
        // If tree i is cut to the left
        if (x[i] - h[i] > x[i - 1]) {
            dp[i][1] = max(dp[i][1], dp[i - 1][0] + 1);
            dp[i][1] = max(dp[i][1], dp[i - 1][1] + 1);
        }
        if (x[i] - h[i] > x[i - 1] + h[i - 1]){
            dp[i][1] = max(dp[i][1], dp[i - 1][2] + 1);
        }
        
        // If tree i is cut to the right
        dp[i][2] = max(dp[i][2], dp[i - 1][0] + 1);
        dp[i][2] = max(dp[i][2], dp[i - 1][1] + 1);
        if (x[i - 1] + h[i - 1] < x[i]){
            dp[i][2] = max(dp[i][2], dp[i - 1][2] + 1);
        }
//      cout << i << ": " << dp[i][0] << ' ' << dp[i][1] << ' ' << dp[i][2] << '\n';
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]});
return 0;
}