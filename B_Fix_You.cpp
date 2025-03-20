#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n >> m;

        char s[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> s[i][j];
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i][m - 1] == 'R')
            {

                count++;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (s[n - 1][j] == 'D')
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}