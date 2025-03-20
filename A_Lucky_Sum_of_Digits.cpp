#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n / 7;

    if (n % 7 == 0)
    {
        while ((x--))
        {
            cout << "7";
        }
    }
    else
    {

        int a;
        int b;
        int flag = 0;
        int c = n / 4;

        for (int i = 1; i <= c; i++)
        {
            if ((n - 4 * i) % 7 == 0)
            {
                a = i;
                b = n - 4 * i;
                flag = 1;
                break;
            }
        }
        int d = b / 7;

        if (flag == 1)
        {
            while (a--)
            {
                cout << "4";
            }
            while (d--)
            {
                cout << "7";
            }
        }
        else
        {
            cout << "-1";
        }
    }
    return 0;
}