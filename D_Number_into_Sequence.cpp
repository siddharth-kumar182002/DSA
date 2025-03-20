#include <bits/stdc++.h>
using namespace std;
long long f(long long a,long long b){
long long ans=1;
while(b>0){
    if(b&1){
        ans=ans*a;
    }
    a=a*a;
    b=b>>1;
}
return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> p;

        for (long long i = 2; i * i <= n; i++)
        {
            long long count = 0;
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            if (count > 0)
            {
                p.push_back({count, i});
            }
        }
        if (n > 1)
        {
            p.push_back({1, n});
        }
        sort(p.rbegin(), p.rend());

        vector<long long> ans(p[0].first, p[0].second);
long long m=ans.size();
        for (int i = 1; i < p.size(); i++)
        {
            ans[m - 1] *= (f(p[i].second,p[i].first));
        }

        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}