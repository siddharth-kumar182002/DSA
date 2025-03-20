#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    vector<long long> v(n + 1);

    for (long long i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    long long ans;
    long long x;

    ans = v[n];
    x = v[n];
    

    for (long long j = n - 1; j >= 1; j--)
    {
        if (x > v[j])
        {
            ans = ans + v[j];
            x = v[j];
          // cout<<"x="<<x<<endl;
            // cout<<"ans="<<ans<<endl;
        }
        else
        {

            ans = ans + (x - 1);
            x = x - 1;
     //        cout<<"x2="<<x<<endl;
  //cout<<"ans2="<<ans<<endl;
        }

        if(x==0){
            break;
        }
    }

    cout << ans << endl;

    return 0;
}