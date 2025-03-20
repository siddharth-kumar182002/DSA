#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;

vector<vector<long long>> d(n,vector<long long > (m));

for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
     size_t pos = s.find('1');
    if (pos == string::npos)
        {
            cout << -1 << '\n';
            return 0;
        }

        long long  dist = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[(j+pos)%m] == '1')
            {
                dist = 0;
            }
            else
            {
                dist++;
            }
            d[i][(j+pos)%m] = dist;
        }
        for (int j = m; j > 0; j--)
        {
            if (s[(j+pos)%m] == '1')
            {
                dist = 0;
            }
            else
            {
                dist++;
            }
            d[i][(j+pos)%m] = min(d[i][(j+pos)%m], dist);
        }

}
int res = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += d[j][i];
        }
        res = min(res, sum);
    }

    cout << res << '\n';

return 0;
}