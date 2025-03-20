#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    int i = 1;
    int ans = 0;
    int count = 0;

    while (ans < n)
    {

        x = x + i;

        ans = ans + x;
        if (ans <= n)
        {
            count++;
        }

        i++;

        /*cout << "x=" << x << endl;
         cout << "i=" << i << endl;
         cout << "ans=" << ans << endl;*/
    }
    cout << count << endl;
    return 0;
}