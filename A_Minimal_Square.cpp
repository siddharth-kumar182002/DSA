#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << (2 * a) * (2 * a) << endl;
        }
        else if (a > b)
        {
            if (2 * b >= a)
            {
                cout << (2 * b) * (2 * b) << endl;
            }
            else
            {
                cout << a * a << endl;
            }
        }
        else
        {
            if (2 * a >= b)
            {
                cout << (2 * a) * (2 * a) << endl;
            }
            else
            {
                cout << b * b << endl;
            }
        }
    }

        return 0;
    }