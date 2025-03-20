#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x;
    int y;
    int i = 1;

    if (n > m)
    {

        if (n % 2 == 0)
        {
            x = n / 2;
        }
        else
        {
            x = (n / 2) + 1;
        }
        while (true)
        {

            y = m * i;

            if (x > y)
            {
                i++;
                continue;
            }
            else
            {
                break;
            }
        }

        cout << y << endl;
    }
    else if (n == m)
    {
        cout << m << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}