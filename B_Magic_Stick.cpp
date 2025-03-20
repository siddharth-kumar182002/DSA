#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 1)
        {
            if (x == y)
            {

                cout << "YES" << endl;
            }
            else if (x > y)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (x == 2)
                {
                    if (y == 3)
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
                else if (x == 3)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        else
        {
            if (x == 1 && y == 1)
            {
                cout << "YES" << endl;
            }
            else if (x == 0 && y == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}