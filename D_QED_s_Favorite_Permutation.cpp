#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector<long long> arr(n + 1);
        vector<long long> brr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if (i > 1) {
                brr[i] = max(arr[i], brr[i - 1]);
            } else {
                brr[i] = arr[i];
            }
        }
        
        string s;
        cin >> s;
        
        set<long long> mp1;
        for (int i = 1; i <= n; i++) {
            if (i != brr[i]) {
                mp1.insert(i);
            }
        }
        
        set<long long> mp2;
        for (int i = 1; i < n; i++) {
            if ((mp1.find(i) != mp1.end()) && s[i - 1] == 'L' && s[i] == 'R') {
                mp2.insert(i);
            }
        }

        while (q--) {
            long long x;
            cin >> x;

            if (mp1.find(x) != mp1.end()) {
                if (s[x - 1] == 'R') {
                    s[x - 1] = 'L';
                    if (x < n && s[x] == 'R') {
                        mp2.insert(x);
                    }
                    long long j = x - 1;
                    if (j > 0 && (mp1.find(j) != mp1.end()) && s[j - 1] == 'L') {
                        mp2.erase(j);
                    }
                } else {
                    mp2.erase(x);
                    s[x - 1] = 'R';
                    long long j = x - 1;
                    if (j > 0 && (mp1.find(j) != mp1.end()) && s[j - 1] == 'L') {
                        mp2.insert(j);
                    }
                }
            } else {
                if (s[x - 1] == 'R') {
                    s[x - 1] = 'L';
                    long long j = x - 1;
                    if (j > 0 && (mp1.find(j) != mp1.end()) && s[j - 1] == 'L') {
                        mp2.erase(j);
                    }
                } else {
                    s[x - 1] = 'R';
                    long long j = x - 1;
                    if (j > 0 && (mp1.find(j) != mp1.end()) && s[j - 1] == 'L') {
                        mp2.insert(j);
                    }
                }
            }

            long long sz = mp2.size();
            if (sz > 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }

            //cout<<s<<endl;
        }
    }
    return 0;
}
