#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        string rev;
        rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] == s[n - i - 1])
                {
                    continue;
                }
                else if ((s[i] + 2) == (s[n - i - 1]) || (s[i] - 2) == (s[n - i - 1]))
                {
                    continue;
                }
                else
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {

                cout << "YES" << endl;
            }
        }
    }
    return 0;
}