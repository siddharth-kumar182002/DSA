#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        int arr[n + 1];
        int arr1[m];
        int pos[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pos[arr[i]] = i;
        }
        /*for (int i = 1; i <=n; i++)
        {
            cout<<index[i]<<" ";
        }*/

        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        int ans = 1e8;
        for (int i = 0; i < m - 1; i++)
        {
            int mov = 0;
            if (pos[arr1[i]] > pos[arr1[i + 1]])
            {
                mov = mov + 0;
                ans = min(mov, ans);
                continue;
            }
            else
            {
                if (pos[arr1[i + 1]] - pos[arr1[i]] > d)
                {
                    mov = mov + 0;
                    ans = min(mov, ans);
                    continue;
                }
                else
                {
                    int x = pos[arr1[i + 1]] - pos[arr1[i]] - 1;
                    if (n - (x + 2) < (d - x))
                    {

                        mov = mov + x + 1;
                    }
                    else
                    {

                        mov = mov + min(d - x, x + 1);
                    }
                }
            }
            ans = min(mov, ans);
        }

        cout << ans << endl;
    }
    return 0;
}