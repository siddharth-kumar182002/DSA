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
        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<vector<long long>> count(n, vector<long long>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (j == 0)
                {
                    if (arr[i][j] == '*')
                    {
                        count[i][j]++;
                    }
                }
                else
                {
                    if (arr[i][j] == '*')
                    {
                        count[i][j] = 1 + count[i][j - 1];
                    }
                    else{
                    count[i][j] = count[i][j - 1];
                    }
                }
            }
        }

        // for (auto x : count)
        // {
        //     for (auto y : x)
        //     {
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = i; k < n; k++)
                {
                    long long l = j - (k-i);
                    long long r = j + (k-i);
                    // cout<<l<<" "<<r<<endl;
                    // cout<<"k="<<k<<endl;
                    if (l >= 0 && r < m)
                    {
                        long long b = count[k][r];
                        long long a;
                        if (l == 0)
                        {
                            a = 0;
                        }
                        else
                        {
                            a = count[k][l - 1];
                        }
                        long long diff = b - a;
                        // cout<<"diff="<<diff<<" "<<(2*(k-i)+1)<<endl;
                        // cout<<"a="<<a<<" "<<"b="<<b<<endl;
                        if (diff == (2*(k-i)+1))
                        {
                            ans++;
                        }
                        else
                        {
                            break;
                        }
                        
                        // cout<<"ans="<<ans<<endl;
                    }
                    else
                    {
                        break;
                    }
                    
                }
                // cout<<"i="<<i<<" "<<"j="<<j<<" "<<"ans="<<ans<<endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}