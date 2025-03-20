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
        long long n, k;
        cin >> n >> k;

        long long mx = 0;
        long long idx = 1;
        for (long long i = n; i >= 1; --i)
        {
            mx += abs(i - idx),
                idx++;
        }
        
        if (k % 2 != 0 || k>mx)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<long long> arr(n);
            for (int i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            cout << "YES" << endl;
            long long l = 0;
            long long r = n - 1;
            while (k >0)
            {
                long long s=min(k/2,r-l);
                 swap(arr[l], arr[l+s]);
                 k=k-2*s;
                 l++;
                 r--;
            }
            for (auto x : arr)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}