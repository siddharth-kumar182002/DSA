#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<long long>> count(n, vector<long long>(26, 0));
        count[0][s[0] - 'a']++;
        for (int i = 1; i < s.size(); i++)
        {
            count[i][s[i] - 'a']++;

            for (int j = 0; j < 26; j++)
            {
                count[i][j] += count[i - 1][j];
            }
        }
        vector<long long> ans(26, 0);
        for (int i = 0; i < m; i++)
        {
            long long ind;
            cin >> ind;

            for (int j = 0; j < 26; j++)
            {
                ans[j] += count[ind - 1][j];
            }
        }
        long long ind = n;
        for (int j = 0; j < 26; j++)
        {
            ans[j] += count[ind - 1][j];
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}