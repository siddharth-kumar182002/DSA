#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int count = 0;
    int flag = 0;
    int t;
    vector<char> ans;

    string x = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (x[i] == s[j])
            {
                count++;
            }
           // cout << "andar=" << x[i] << "+" << s[j] << endl;
        }
        //cout << "count=" << count << endl;
        if ((count % k == 0) && count > 0)
        {
            t = count / k;

            while (t--)
            {
                ans.push_back(x[i]);
            }
            //cout << "in" << endl;

            count = 0;
        }
        else if (count == 0)
        {
            continue;
        }

        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        while (k--)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i];
            }
        }
    }

    return 0;
}