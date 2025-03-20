#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    if (t <= 2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        if (t % 2 == 0)
        {
            cout << t / 2 << " ";
            for (long long i = 1; i <= t / 2; i++)
            {
                cout << 2 * i << " ";
            }
            cout << endl;
            cout << t / 2 << " ";
            for (long long i = 1; i <= t / 2; i++)
            {
                cout << 2 * i - 1 << " ";
            }
        }

        else
        {
            cout<<t/2<<" ";
            for (long long i = 1; i <=t/2; i++)
            {
                cout<<2*i<<" ";
            }
            cout<<endl;
            cout<<t/2+1<<" ";
            for (long long i = 0; i <=t/2; i++)
            {
                cout<<2*i+1<<" ";
            }
            cout<<endl;
            
        }
    }
    return 0;
}