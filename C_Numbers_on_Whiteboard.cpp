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

        vector<int> x;
        vector<int> y;

        for (int i = 1; i <= n; i++)
        {
            x.push_back(i);
        }

        // cout<<x[1]<<endl;

        for (int i = 0; x.size() > 1; i++)
        {
            // v.push_back(x);
            int sum = x[n - i - 1] + x[n - i - 2];
            y.push_back(x[n - i - 2]);
            y.push_back(x[n - i - 1]);

            x.pop_back();
            x.pop_back();

            if (sum % 2 == 1)
            {
                x.push_back(sum / 2 + 1);
            }
            else
            {
                x.push_back(sum / 2);
            }
        }

        cout<<x.back()<<endl;

        for (int i = 0; i < y.size(); i+=2)
        {
            cout<<y[i]<<" "<<y[i+1]<<endl;
        }
        

    }
    return 0;
}