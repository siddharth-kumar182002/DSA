#include <bits/stdc++.h>

using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);


#define int long long
#define all(x) (x).begin(), (x).end()

void CoderAbhi27() {
    int n, m;
    cin >> n >> m;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    vector<vector<int>> dp(m + 1, vector<int>(m + 1, 0));
    dp[0][0] = 0;
    vector<int> v1, v2;
    int tot = 0;
    for (int i = 0; i < n; i++) {
        if (r[i] > 0) {
            v1.push_back(r[i]);
        } else if (r[i] < 0) {
            v2.push_back(-r[i]);
        } else { // m times
            sort(all(v1));
            sort(all(v2));
            tot++;
            for (int j = 0; j <= tot; j++) { // m times
                if (j != 0) {
                    int c1 = j - 1, c2 = tot - j;
                    int val = (upper_bound(all(v1), c1) - v1.begin()) +
                              (upper_bound(all(v2), c2) - v2.begin()); // logn
                    dp[tot][j] = max(dp[tot][j], dp[tot - 1][j - 1] + val);
                }
                if (j < tot) {
                    int c1 = j, c2 = tot - j - 1;
                    int val = (upper_bound(all(v1), c1) - v1.begin()) +
                              (upper_bound(all(v2), c2) - v2.begin()); // logn
                    dp[tot][j] = max(dp[tot][j], dp[tot - 1][j] + val);
                }
            }
            v1.clear();
            v2.clear();
        }
    } // O(m^2logn + nlogn)

    for (int i = 0; i <=m; i++)
    {
        for (int j = 0; j <=m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    
    sort(all(v1));
    sort(all(v2));
    int ans = 0;
    // cout<<v1<<'\n'<<v2<<'\n';
    for (int j = 0; j <= m; j++) {
        int c1 = j, c2 = m - j;
        int val = (upper_bound(all(v1), c1) - v1.begin()) +
                  (upper_bound(all(v2), c2) - v2.begin());
        ans = max(ans, dp[m][j] + val);
        // cout<<val<<' ';
    } // mlogn

    cout << ans << '\n';
}

// tc -> O(m*m*logn + nlogn)

int32_t main() {
    fastIO;

    int t = 1;
    // cin >> t;
    while (t--) {
        CoderAbhi27();
    }
    return 0;
}