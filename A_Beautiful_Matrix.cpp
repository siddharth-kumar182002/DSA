#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5][5];
    int a, b;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                if (i < 3)
                {
                    a = 2 - i;
                }
                else if (i >= 3)
                {
                    a = i-2;
                }

                if (j < 3)
                {
                    b = 2 - j;
                }
                else if (j >= 3)
                {
                    b = j-2;
                }
            }
        }
    }
    
    cout<<a+b<<endl;

    return 0;
}