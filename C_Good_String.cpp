#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long n = s.size();
        // cout<<n<<endl;
        vector<vector<long long>> arr(10);
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - '0'].push_back(i);
        }
        long long ans = -1;

        for (int i = 0; i < 10; i++)
        {
            ans = max(ans, (arr[i].size()) * 1LL);
            for (int j = 0; j < 10; j++)
            {
                if (i == j)
                {
                    continue;
                }

                long long count = 1;
                long long f = 0;
                long long l = 0;
                long long k = 0;
                while (k < (arr[i].size()) && l < arr[j].size())
                {
                    if (f == 0)
                    {
                        while (l < arr[j].size() && arr[i][k] > arr[j][l])
                        {
                            l++;
                        }

                        if (l < arr[j].size() && arr[i][k] < arr[j][l])
                        {

                            count++;
                        }
                        f = 1;
                    }
                    else
                    {
                        while (k < arr[i].size() && arr[i][k] < arr[j][l])
                        {
                            k++;
                        }

                        if (k < arr[i].size() && arr[i][k] > arr[j][l])
                        {

                            count++;
                        }
                        f = 0;
                    }
                }
                if (count % 2 != 0)
                {
                    count--;
                }
                ans = max(ans, count);
            }
        }
        cout << n - ans << endl;
    }

    return 0;
}