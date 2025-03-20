#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n][2];

        int arr1[51] = {0};

        for (int i = 0; i < n; i++)
        {
            int temp1;
            cin >> temp1;
            int temp2;
            cin >> temp2;
            if (k >= temp1 && k <= temp2)
            {
                for (int k = temp1; k <= temp2; k++)
                {
                    arr1[k]++;
                }
            }
            else
            {
                continue;
            }
        }

        /* for (int i = 1; i < 51; i++)
         {
             cout<<arr1[i]<<endl;
         }*/

        int flag = 0;
        for (int i = 1; i < 51; i++)
        {
            if (i == k)
            {
                continue;
            }
            if (arr1[k] == arr1[i])
            {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag != 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}