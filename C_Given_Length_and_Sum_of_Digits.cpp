#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);

    long long m, s;
    cin >> m >> s;

    vector<long long> arr(m, 0);
    long long x = s ;
    long long i = 0;
    while (x > 0 && i < m)
    {
        if (x >= 9)
        {
            arr[i] +=9;
            x = x - 9;
        }
        else
        {
            arr[i] += x;
            x = 0;
        }
        i++;
    }
    if (x > 0 || (arr[0]==0 && m!=1))
    {
        cout << -1 << " " << -1 << endl;
    }
    else
    {
        vector<long long> brr(arr.rbegin(),arr.rend());
        sort(brr.begin(),brr.end());
        if(brr[0]==0){
            for (int i = 1; i <m ; i++)
            {
                if(brr[i]!=0){
                   brr[0]=1;
                   brr[i]=brr[i]-1;
                    break;
                }
            }
        }

        for(auto x: brr){
            cout<<x;
        }
        cout<<" ";
        for(auto x: arr){
            cout<<x;
        }
        cout<<" "<<endl;
     
    }

    return 0;
}