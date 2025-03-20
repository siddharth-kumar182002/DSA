#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, f;
        cin >> s >> f;
        long long ch = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                long long end = (j - (f.size() - (j - i + 1)));
                if (end >= 0 && end < s.size())
                {
                    string temp = s.substr(i, (j - i + 1));
                    if (end + f.size() - (j - i + 1) < s.size() && end + f.size() - (j - i + 1) < s.size() >= 0)
                    {
                        string q = s.substr(end, (f.size() - (j - i + 1)));
                        reverse(q.begin(), q.end());
                        temp = temp + q;
                    }
                    if (temp == f)
                    {
                        ch = 1;
                        break;
                    }
                }
            }
            if (ch == 1)
            {
                break;
            }
        }

        if (ch == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}