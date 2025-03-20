#include <bits/stdc++.h>
using namespace std;

void f(char &a)
{
    if (a == '0')
    {
        a = '1';
    }
    else
    {
        a = '0';
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
        string a, b;
        cin >> a >> b;
        // reverse(a.begin(),a.begin()+4);

        vector<long long> ans;
        vector<long long> count(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            char x = a[i];
            char y = a[0];
            if (count[i] % 2 != 0)
            {
                f(x);
            }
            if (count[0] % 2 != 0)
            {
                f(y);
            }
            if (x != b[i])
            {
                if (x == y)
                {
                    ans.push_back(i + 1);
                    reverse(a.begin(), a.begin() + (i + 1));
                    for (int j = 0; j <= i; j++)
                    {
                        count[j]++;
                    }
                    reverse(count.begin(), count.begin() + (i + 1));
                }
                else
                {
                    ans.push_back(1);
                    count[0]++;

                    ans.push_back(i + 1);
                    reverse(a.begin(), a.begin() + (i + 1));
                    for (int j = 0; j <= i; j++)
                    {
                        count[j]++;
                    }
                    reverse(count.begin(), count.begin() + (i + 1));
                }
            }
        }

        cout << ans.size() << " ";
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}