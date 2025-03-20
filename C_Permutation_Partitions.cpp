#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n, k, a;
    cin >> n >> k;
    long long p = -1;
    long long ans = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= n - k + 1)
        {
            if (p != -1){
                ans = (ans*(i - p)) % MOD;
            }
            sum += a;
            p = i;
        }
    }
    cout << sum << " " << ans << "\n";
    return 0;



return 0;
}