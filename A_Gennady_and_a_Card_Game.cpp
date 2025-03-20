#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    string v;
    cin.ignore();
    getline(cin, v);

   /* for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }*/
    

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s[0] || v[i] == s[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}