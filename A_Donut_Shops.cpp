#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;

        cin >> a >> b >> c;
        long long boxsingle = c / b;

        if (a >= c)
        {
            cout << "-1 " << b<<endl;
        }
        else{
            if(a<=boxsingle){
                
                cout<<"1"<<" -1"<<endl;
            }
            else{
                cout<<"1 "<<b<<endl;

            }

        }
         

        
    }
    return 0;
}