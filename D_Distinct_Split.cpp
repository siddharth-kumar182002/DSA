#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define ln '\n'

#define REP(i, a, b) for(int i = a; i <= b; i++)
#define REPN(i, a) for(int i = 0; i < a; i++)
#define REPd(i, a, b) for(int i = a; i >= b; i--)
#define REPNd(i, a) for (int i = a; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pll pair<ll, ll>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        map<char, ll> mp;
        set<char> r;
        ll k;
        REPN(i, n){
            if(mp[s[i]] != 0){
                k = i;
                break;
            }
            mp[s[i]]++;
            r.insert(s[i]);

        }
        set<char> r2;
        for(ll i = k; i<n; i++){
            r2.insert(s[i]);
        }
        cout << r.size() + r2.size()<< ln;
    }
}