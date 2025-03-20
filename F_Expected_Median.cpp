#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
const int MAXN = 1000000; // Adjust according to your needs

// Precompute factorials and modular inverses
vector<long long> fact(MAXN + 1), inv_fact(MAXN + 1);

long long mod_inv(long long x, long long mod) {
    long long result = 1, y = mod - 2;
    while (y > 0) {
        if (y & 1) result = (result * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return result;
}

void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; ++i) {
        fact[i] = fact[i - 1] * i % mod;
    }
    inv_fact[MAXN] = mod_inv(fact[MAXN], mod);
    for (int i = MAXN - 1; i >= 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % mod;
    }
}

long long binomial_coefficient(long long n, long long k) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv_fact[k] % mod * inv_fact[n - k] % mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    precompute_factorials();

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        long long one = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] == 1) {
                ++one;
            }
        }

        long long req = (k - 1) / 2;
        long long sum = 0;
        for (long long i = req + 1; i <= one; ++i) {
            if (i > k) {
                break;
            }
            sum = (sum + binomial_coefficient(one, i) * binomial_coefficient(n - one, k - i)) % mod;
        }
        cout << sum << endl;
    }

    return 0;
}
