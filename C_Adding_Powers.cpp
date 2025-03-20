#include <bits/stdc++.h>
using namespace std;

vector<long long> asPowerSum(long long w, long long m)
{
    long long f = 0;
    vector<long long> ans;
    while (m)
    {
        if ((m - 1) % w == 0)
        {
            m = (m - 1) / w;
            ans.push_back(f);
        }
        else if (m % w == 0)
        {
            m = m / w;
        }
        else
        {
            break;
        }
        f++;
    }
    if (m != 0)
    {
        ans.clear();
    }
    return ans;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long f = 0;
        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            vector<long long> arr = asPowerSum(k, x);
            if (arr.size() == 0 && x!=0)
            {
                f = 1;
              
            }
            for (int j = 0; j < arr.size(); j++)
            {
                mp[arr[j]]++;
                if (mp[arr[j]] > 1)
                {
                    f = 1;
                   
                }
            }
           
        }
        if (f == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
