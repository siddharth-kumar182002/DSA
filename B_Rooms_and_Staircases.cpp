#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        long long min_i = 10000000;
        long long max_i = -1;
        long long n;
        cin >> n;
        long long flag = 0;

        string s[10000000000];
        cin >> s;

        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                flag = 1;
                min_i = min(min_i, i);
                max_i = max(max_i, i);
            }
        }
        // cout<<"min"<<min_i<<endl;
        //  cout<<"max"<<max_i<<endl;

        if (flag == 1)
        {
            if (min_i == max_i)
            {

                if (s[0] == '1' || s[n - 1] == '1')
                {
                    cout << 2 * n << endl;
                }
                else
                {
                    cout << n + 1 << endl;
                }
            }
            else
            {
                long long a = n - max_i - 1;
                long long b = min_i;
                // cout<<"A="<<a<<endl;
                // cout<<"b="<<b<<endl;

                if (a > b)
                {
                    cout << (2 * n - 2 * b) << endl;
                }
                else if (b > a)
                {
                    cout << (2 * n - 2 * a) << endl;
                }
                else if (a == b)
                {
                    cout << (2 * n - 2 * a) << endl;
                }
            }
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}