#include <bits/stdc++.h>
using namespace std;

string s;
long long nb, ns, nc;
long long pb, ps, pc;
long long r;
long long cb;
long long cs;
long long cc;

bool hamburger(long long x)
{
    cb = count(s.begin(), s.end(), 'B');
    cs = count(s.begin(), s.end(), 'S');
    cc = count(s.begin(), s.end(), 'C');
    long long f = r;
    if ((nb - (x * cb)) < 0)
    {
        f = f - (-1) * (nb - (x * cb)) * pb;
    }
    if ((ns - (x * cs)) < 0)
    {
        f = f - (-1) * (ns - (x * cs)) * ps;
    }
    if ((nc - (x * cc)) < 0)
    {
        f = f - (-1) * (nc - (x * cc)) * pc;
    }

    if (f < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    long long lo = 0;
    long long hi = 1e14;
    long long mid;
    // tttttfffffff
    //cout << "test1" << hamburger(11) << endl;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (hamburger(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }

        //cout << "hiin=" << hi << endl;
        //cout << "loin=" << lo << endl;
        //cout << "mid=" << mid << endl;
    }
    //cout << "hi=" << hi << endl;
    //cout << "lo=" << lo << endl;
    //cout << "test2" << hamburger(3) << endl;
    if (hamburger(hi))
    {
        cout << hi << endl;
    }
    else if (hamburger(lo))
    {
        cout << lo << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}