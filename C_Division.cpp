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
        long long x, y;
        cin >> x >> y;

        if (x % y != 0)
        {
            cout << x << endl;
            continue;
        }

        long long maxi = 1;
        for (long long i = 1; i * i <= y; i++)
        {
            if (y % i == 0)
            {
                if (y == i * i)
                {
                    long long temp = x / i;
                    while ( i>1 && temp >0 && temp % y == 0)
                    {
                        temp = temp / i;
                    }
                    if ( temp % y != 0)
                    {
                        maxi = max(maxi, temp);
                    }
                    //cout << i << endl;
                }
                else
                {
                    long long a = x / i;
                    long long div = y / i;
                    long long b = x / div;
                    while (i>1 && a >0 && a % y == 0)
                    {
                        a = a / i;
                    }
                    if (a % y != 0)
                    {
                        maxi = max(maxi, a);
                    }
                    while (div>1 && b >0 && b % y == 0)
                    {
                        b = b / div;
                    }
                    if (b % y != 0)
                    {
                        maxi = max(maxi, b);
                    }
                    //cout << i << " " << y / i << endl;
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}