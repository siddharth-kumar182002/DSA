#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        long long yasum = 0;
        long long currsum = 0;
        long long str=-1;
        long long start=-1;
        long long end=-1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (currsum == 0)
            {
                str = i;
            }
            currsum += arr[i];
            if (currsum > yasum)
            {
                yasum = currsum;
                start = str;
                end = i;
            }

            if (currsum < 0)
            {
                currsum = 0;
            }
            //cout<<arr[i]<<" ";
        }
        //cout<<endl;
        // cout<asum<<endl;
        // cout<<start<<" "<<end<<" "<<endl;
        if (start == 0 && end == n - 1)
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