#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int arr[7];
    int i = 0;
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        if (sum < t)
        {
            if (i <= 6)
            {
                sum = sum + arr[i];
                i++;
            }
            else
            {
                i = 0;
            }
        }
        else
        {
            break;
        }

        // cout << "i=" << i << " "

        //<< "sum=" << sum << endl;
    }

    cout << i << endl;
}