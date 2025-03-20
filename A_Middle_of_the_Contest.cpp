#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    string y;

    cin >> x;

    cin >> y;

    int a = x[0] - '0';
    int b = x[1] - '0';
    int c = x[3] - '0';
    int d = x[4] - '0';
    int a1 = y[0] - '0';
    int b1 = y[1] - '0';
    int c1 = y[3] - '0';
    int d1 = y[4] - '0';

    int l = a * 10 + b;
    int m = c * 10 + d;
    int l1 = a1 * 10 + b1;
    int m1 = c1 * 10 + d1;

    int t = ((l1 - l) * 60 + (m1 - m)) / 2;
    int r, q;
    q = (t / 60);
    r = (t % 60);

    if ((m + r) < 60)
    {

        if (l + q < 10)
        {

            if (m + r < 10)
            {
                cout << "0" << l + q << ":"
                     << "0" << m + r;
            }
            else
            {
                cout << "0" << l + q << ":" << m + r;
            }
        }
        else
        {
            if (m + r < 10)
            {
                cout << l + q << ":"
                     << "0" << m + r;
            }
            else
            {
                cout << l + q << ":" << m + r;
            }
        }
    }
    else if (m + r == 60)
    {

        if (l + q + 1 < 10)
        {
            cout << "0" << l + q + 1 << ":"
                 << "00";
        }
        else
        {
            cout << l + q + 1 << ":"
                 << "00";
        }
    }
    else
    {
        if (l + q < 10)
        {
            if ((m+r)%60< 10)
            {
                cout << "0" << l + q+(m+r)/60 << ":"
                     << "0" << (m+r)%60;
            }
            else
            {
                cout << "0" << l + q +(m+r)/60<< ":" << (m+r)%60;
            }
        }
        else
        {
            if ((m+r)%60< 10)
            {
                cout << l + q+(m+r)/60<< ":"
                     << "0" << (m+r)%60;
            }
            else
            {
                cout << l + q +(m+r)/60<< ":" << (m+r)%60;
            }
        }
    }

    return 0;
}