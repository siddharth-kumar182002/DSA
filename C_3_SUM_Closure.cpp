#include <bits/stdc++.h>
using namespace std;
// #define int int
int main()
{
    ios ::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int cnt1 = 0;
        int cnt2 = 0;
        vector<int> b;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            if (arr[i] > 0)
            {
                cnt1++;
            }
            if (arr[i] < 0)
            {
                cnt2++;
            }

            if (arr[i] != 0)
            {
                b.push_back(arr[i]);
            }
        }
        if (cnt1 >= 3 || cnt2 >= 3)
        {
            cout << "NO" << endl;
            continue;
        }

        int x = b.size();
        bool f = true;
        for (int i = 0; i < x; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                for (int k = j + 1; k < x; k++)
                {
                    if (mp[(b[i] + b[j] + b[k])] == 0)
                    {
                        f = false;
                    }
                }
            }
        }

        if (mp[0] >= 1)
        {
            for (int i = 0; i < x; i++)
            {
                for (int j = i + 1; j < x; j++)
                {
                    if (mp[b[i] + b[j]] == 0)
                    {
                        f = false;
                    }
                }
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}