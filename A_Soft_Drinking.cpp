#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = (k * l) / nl;
    int b = (c * d);
    int y = (p / np);
    int x = min(a, min(b, y));
    cout << x / n << endl;

    return 0;
}