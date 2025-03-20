#include <bits/stdc++.h>
using namespace std;

long long n, h;
vector<long long> a;

bool kill(long long z)
{
    long long damage = z;
    int flag = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) > z)
        {
            damage = damage + z;
        }
        else
        {
            damage = damage + (a[i + 1] - a[i]);
        }

        if (damage >= h)
        {
            flag = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    if (flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    long long t;
    cin>>t;

    while(t--){
        a.clear();
    cin >> n >> h;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }

   // cout << "test1=" << kill(3) << endl;

    long long lo = 0;
    long long hi = 1e18;
    long long mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (kill(mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
        //cout << "hiin=" << hi << endl;
        //cout << "loin=" << lo << endl;
        //cout << "mid=" << mid << endl;
    }
   //cout << "hi=" << hi << endl;
   //cout << "lo=" << lo << endl;
   //cout << "test2" << kill(3) << endl;

 if (kill(lo))
    {
        cout << lo<< endl;
    }
    else if (kill(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << h << endl;
    }
}
    return 0;
}