#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int c, d;
    cin >> c >> d;
    int x, y;
    int ans=c+d;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        x = d - a;
        y = x + b;

        ans=max(ans,y);

        d = y;
    }

    cout<<ans<<endl;
    return 0;
}