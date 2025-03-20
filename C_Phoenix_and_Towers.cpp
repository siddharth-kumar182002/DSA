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
        long long n, m, x;
        cin >> n >> m >> x;
        vector<pair<long long, long long>> arr(n);
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr[i] = {x, i};
        }

        sort(arr.begin(), arr.end());
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        long long maxi = -1;
        map<long long, long long> mp;
        for (int j = 0; j < m; j++)
        {
            pq.push({arr[j].first, (j + 1)});
            mp[arr[j].second] = j + 1;
            maxi = max(maxi, arr[j].first);
        }

        for (int i = m; i < n; i++)
        {
            pair<long long, long long> y = pq.top();
            pq.pop();
            maxi = max(maxi, arr[i].first + y.first);
            pq.push({arr[i].first + y.first, y.second});
            mp[arr[i].second] = y.second;
        }

        if ((maxi - (pq.top().first)) > x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << mp[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}