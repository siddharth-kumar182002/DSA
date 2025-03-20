#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long l = 1;
    long long r = 1000001;
    while (l + 1 < r)
    {
        long long mid = (l + r) / 2;
        cout << mid << endl;
        cout << flush;
        string s;
        cin >> s;
        if (s == ">=")
        {
            l = mid;
        }
        else
        {
            r= mid;
        }
    }
    cout << "! " << l << endl;
    cout << flush;
    return 0;
}