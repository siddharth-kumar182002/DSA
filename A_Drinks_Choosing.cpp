#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int c1 = 0;
    int c2 = 0;
    for (int j = 1; j <= k; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == j)
            {
                c1++;
            }
        }
        if (c1 % 2 != 0)
        {
            c2++;
        }
        c1 = 0;

        //cout << "c2in=" << c2 << endl;
    }
    
    if (c2 % 2 == 0)
    {
        cout << n - (c2 - c2 / 2) << endl;
    }
    else
    {
        cout << n - (c2 - (c2 + 1) / 2) << endl;
    }

    return 0;
}