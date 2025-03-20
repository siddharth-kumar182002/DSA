#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int k = n - i; k <= n; k++)
        {
            if((k - n + i) ==0 && i==0){
                cout << k - n + i;
            }
            else{

            cout << k - n + i << " ";}
        }
        for (int l = i - 1; l >= 0; l--)
        {
            if (l == 0)
            {
                cout << l;
            }
            else
            {
                cout << l << " ";
            }
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int k = n - i; k <= n; k++)
        {
            if(k - n + i==0 && i==0){
                  cout << k - n + i;
            }
            else{

            cout << k - n + i << " ";}
        }
        for (int l = i - 1; l >= 0; l--)
        {
            if (l == 0)
            {
                cout << l;
            }
            else
            {
                cout << l << " ";
            }
        }

        cout << endl;
    }

    return 0;
}