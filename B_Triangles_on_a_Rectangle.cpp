#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin >> w >> h;
        long long a, b, c, d;

        long long h1;
        cin >> h1;

        long long a1[h1];
        for (long long i = 0; i < h1; i++)
        {
            cin >> a1[i];
        }
         a = a1[h1 - 1] - a1[0];

        long long h2;
        cin >> h2;
        long long a2[h2];
        for (long long i = 0; i < h2; i++)
        {
            cin >> a2[i];
        }
         b = a2[h2 - 1] - a2[0];

        long long v1;
        cin >> v1;
        long long b1[v1];
        for (long long i = 0; i < v1; i++)
        {
            cin >> b1[i];
        }
         c = b1[v1 - 1] - b1[0];

        long long v2;
        cin >> v2;
        long long b2[v2];
        for (long long i = 0; i < v2; i++)
        {
            cin >> b2[i];
        }
         d = b2[v2 - 1] - b2[0];


        long long x=max(a*h,b*h);
        long long y=max(c*w,d*w);

        long long z=max(x,y);
        
        cout<<z<<endl;
    }
    return 0;
}