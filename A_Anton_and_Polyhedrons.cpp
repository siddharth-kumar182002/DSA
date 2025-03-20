#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int ans = 0;

    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
        {
            ans = ans + 20;
        }
        if (s == "Tetrahedron")
        {
            ans = ans + 4;
        }
        if (s == "Dodecahedron")
        {
            ans = ans + 12;
        }
        if (s == "Cube")
        {
            ans = ans + 6;
        }
        if (s == "Octahedron")
        {
            ans = ans + 8;
        }
    }

    cout << ans << endl;
    return 0;
}