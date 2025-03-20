#include <bits/stdc++.h>
using namespace std;
long long n, k;
vector<long long> aing;
vector<long long> bing;


bool cookie(long long z)
{
    long long f = k;
    for (long long i = 0; i < n; i++)
    {
        if ((bing[i] - (z * aing[i])) < 0)
        {
            f = f - (-1) * (bing[i] - (z * aing[i]));
        }
       //cout<<"f="<< f<<endl;
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
    cin >> n>>k;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        aing.push_back(x);
    }
    for (long long i = 0; i < n; i++)
    {
        long long y;
        cin >> y;
        bing.push_back(y);
    }
    // cookie(3) ;

   long long lo = 0;
   long long hi = 1e6;
   long long mid;
   while (hi - lo > 1)
   {
       mid = (hi + lo) / 2;
       if (cookie(mid))
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
   //cout << "test2" << cookie(5) << endl;

   if (cookie(hi))
   {
       cout << hi << endl;
   }
   else if (cookie(lo))
   {
       cout << lo << endl;
   }
   else
   {
       cout << 0 << endl;
   }

    
}