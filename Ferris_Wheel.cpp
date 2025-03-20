#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long i = 0;
    long long j = n - 1;
    long long ans = 0;
    while (i < j)
    {
        if (arr[i] + arr[j] <= x)
        {
            ans++;
            i++;
            j--;
        }
        else
        {
            ans++;
            j--;
        }
    }
    if(i==j){
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}
