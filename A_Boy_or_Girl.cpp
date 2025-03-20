#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    set<char> v;

    for (int i = 0; i < s.size(); i++)
    {
        v.insert(s[i]);
    }

    int x = v.size();
    if (x % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}