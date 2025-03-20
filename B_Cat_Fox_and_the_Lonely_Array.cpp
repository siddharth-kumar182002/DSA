#include <bits/stdc++.h>
using namespace std;

bool f(long long k, vector<long long> &arr)
{

    vector<long long> p(20, 0);
    long long mask = 0;
    long long prv;
    long long ch = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // cout<<"i="<<i<<endl;
        if (i - k >= 0)
        {
            long long x = arr[i - k];
            long long j = 0;
            while (x > 0)
            {
                if (x & 1)
                {
                    p[j]--;
                }
                j++;
                x = x >> 1;
            }
        }
        long long x = arr[i];
        // cout<<"x="<<x<<endl;
        long long j = 0;
        while (x > 0)
        {
            // cout<<"inx="<<x<<endl;
            if (x & 1)
            {
                p[j]++;
                // cout<<j<<endl;
            }

            j++;
            x = x >> 1;
        }

        long long mask = 0;
        for (int k = 0; k < 20; k++)
        {
            if (p[k] > 0)
            {
                // cout<<"k="<<k<<endl;
                mask = mask | (1 << k);
            }
        }

        // cout<<mask<<endl;

        if (i + 1 == k)
        {
            prv = mask;
        }
        if (i + 1 > k)
        {
            if (mask != prv)
            {
                ch = 1;
                break;
            }
            else
            {
                prv = mask;
            }
        }
    }
    if (ch == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long l = 0;
        long long r = n;
        // ffffttttt
        // cout<<f(6,arr)<<endl;

        while (l + 1 < r)
        {
            long long mid = (l + r) / 2;
            if (f(mid, arr))
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }

        cout << r << endl;
    }
    return 0;
}