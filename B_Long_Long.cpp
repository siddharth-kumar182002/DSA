#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;
        vector<long long> a(n);
        // vector<long long> b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long  sum = 0;
        long long  count = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + abs(a[i]);
        }

        for (int i = 0; i <n; i++)
        {
            if (a[i] > 0)
            {
                continue;
            }
            long long f = 0;
            while (a[i] <= 0 && i<n)
            {
                if (a[i] < 0)
                {
                    f = 1;
                }
                i++;
            }
            i--;
            if (f == 1)
            {
                count++;
            }
             //cout<<"i="<<i<<" "<<count<<endl;
        }
        cout << sum << " " << count << endl;
        /*for (int i = 0; i < b.size(); i++)
        {
             cout << b[i] << " " <<endl;
        }*/
    }
    return 0;
}