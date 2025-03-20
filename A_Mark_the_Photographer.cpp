#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int array[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> array[i];
        }
        sort(array, array + 2 * n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((array[i + n] - array[i]) >= x)
            {
                continue;
            }
            else
            {
                count = 1;
                break;
            }
        }

        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}