#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
	cin.tie(NULL);
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;
        char c;
        cin >> c;

        long long l = 0;
        long long res = 0;
        long long count = 0;
        for (int r = 0; r < n && l < n; r++)
        {
            // cout<<"l="<<l<<" "<<"R="<<r<<" "<<endl;
            // cout<<"count="<<count<<endl;

            if (s[r] != c)
            {
                count++;
            }
            // cout<<"count="<<count<<endl;
            while (count > m)
            {
                if (s[l] != c)
                {
                    count--;
                }
                l++;
            }
            // l.......r+1;
            // cout<<"l="<<l<<" "<<"R="<<r<<" "<<endl;
            // cout<<"countdown="<<count<<endl;

            res = max(res, r - l + 1);
        }
        cout << res << endl;
    }
    return 0;
}