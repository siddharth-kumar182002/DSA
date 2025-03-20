#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    string v;

    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 97 && int(s[i]) <= 122)
        {
            s[i] = int(s[i]) - 32;
        }
        if (s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I')
        {
            continue;
        }
        else
        {

            cout << '.' << char(int(s[i]) + 32);
        }
    }

    return 0;
}