#include <bits/stdc++.h>
using namespace std;

long long dist(long long x1, long long y1, long long x2, long long y2)
{
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}
bool f(long long p, vector<pair<long long, long long>> &cows)
{
    queue<pair<long long, long long>> q;
    vector<long long> vis(cows.size(), 0);
    q.push(cows[0]);
    vis[0] = 1;
    while (!q.empty())
    {
        pair<long long, long long> curr = q.front();
        q.pop();

        for (int i = 0; i < cows.size(); i++)
        {
            if (!vis[i] && (dist(curr.first, curr.second, cows[i].first, cows[i].second) <= p))
            {
                vis[i] = 1;
                q.push(cows[i]);
            }
        }
    }
    for (auto x : vis)
    {
        if (x == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    std::ifstream cin("moocast.in");
    long long cows;
    cin >> cows;

    vector<pair<long long, long long>> arr(cows);
    for (int i = 0; i < cows; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    // fffttt
    long long lo = 0;
    long long hi = INT_MAX;
    // cout<<f(16,arr)<<endl;
    while (hi - lo > 1)
    {
        long long mid = (hi + lo) / 2;
        if (f(mid, arr))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
std::ofstream cout("moocast.out");
    if (f(lo, arr))
    {
        cout << lo << endl;
    }
    else
    {
        cout << hi << endl;
    }

    return 0;
}