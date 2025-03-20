#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1000001, A = 11, MOD = 1110111110111;
int n, m, base[N];
set<int> S;
string t;
int get_hash(string &s)
{
    int ret = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ret += s[i] * base[i];
        ret %= MOD;
    }
    return ret;
}
int32_t main()
{
    base[0] = 1;
    for (int i = 1; i < N; i++)
        base[i] = base[i - 1] * A % MOD;
    cin >> n >> m;
    while (n--)
    {
        cin >> t;
        S.insert(get_hash(t));
    }
    while (m--)
    {
        bool ok = 0;
        cin >> t;
        int h = get_hash(t);
        int f;
        int flag=0;
        for (int i = 0; i < t.size(); i++)
        {
            for (char j = 'a'; j <= 'c'; j++)
            {
                if (j != t[i]){
                     f = ((h + (j - t[i]) * base[i]) % MOD);
                if (f < 0)
                {
                    f = (f + MOD);
                }

                if (S.count(f))
                {
                    flag=1;
                    break;
                }
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
