#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ss = s.size();

        string h;
        cin >> h;
        int hs = h.size();
        int i = 0;
        int flag=0;

        string k = "";

        if (s.size() > h.size())
        {
            cout << "NO" << endl;
        }
        else
        {

            while (i + ss <= hs)
            {

                for (int j = i; j <= (i + ss - 1); j++)
                {
                    k.push_back(h[j]);
                }
                sort(s.begin(), s.end());

                sort(k.begin(), k.end());
                if (s == k)
                {

                    flag = 1;
                    break;
                }
                else
                {
                    k.clear();
                    i++;
                }
            }

            cout<<"flag="<<flag<<endl;

            if (flag != 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}