#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;

    cin >> n >> x >> y;
    int flagx = 0;
    int flagy = 0;
    int ans = 100000;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; (j <= x && (i - j) > 0); j++)
        {
            if (arr[i] < arr[i - j])
            {
                continue;
            }
            else
            {
                flagx = 1;
                break;
            }
        }
        for (int k = 1; (k <= y && (i + k) < (n + 1)); k++)
        {
            if (arr[i] < arr[i + k])
            {
                continue;
            }
            else
            {
                flagy = 1;
                break;
            }
        }

        if (flagx != 1 && flagy != 1)
        {
            ans = min(ans, i);
        }
        flagx = 0;
        flagy = 0;
    }
    // cout<<"flagx="<<flagx<<endl;
    // cout<<"flagy="<<flagy<<endl;
    cout << ans << endl;

    return 0;
}