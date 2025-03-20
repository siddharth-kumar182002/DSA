#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int i = 1;
    int ans = 0;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    while (i <= (n - 1))
    {
        ans = v[i] + i;
        if (ans == t)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            i = ans;
            continue;
        }
    }

    // cout<<i<<endl;

    if (i > (n - 1))
    {
        cout << "NO" << endl;
    }
}