#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {

            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
            else
            {
                s[i] = s[i] - 32;
            }

            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
    }

    return 0;
}