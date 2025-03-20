#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n; cin >> n;
    
    vector <int> f(n + 1, 0);
    
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        f[x]++;
    }
    
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INF));
    dp[0][0] = 0;
    
    for (int i = 1; i <= n; i++){
        if (f[i] == 0){
            dp[i] = dp[i - 1];
            continue;
        }
        
        
        //ith with b moved j times
        for (int j = 0; j <= i; j++){
            //ith block choosen by A
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
            //ith block choosen by B
            if (j + f[i] <= n && dp[i - 1][j] >= f[i] + j){
                dp[i][j + f[i]] = min(dp[i][j + f[i]], dp[i - 1][j]);
            }
        }
    }
    
    int ans = INF;
    for (auto x : dp[n]) ans = min(ans, x);
    
    cout << ans << "\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}