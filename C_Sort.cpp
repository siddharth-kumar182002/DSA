#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        string a;
        string b;
        cin>>a>>b;
        vector<vector<long long>> arr(26, vector<long long>(n + 1, 0));
        vector<vector<long long>> brr(26, vector<long long>(n + 1, 0));

        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if (i == (a[j-1] - 'a'))
                {
                    arr[i][j] = arr[i][j - 1] + 1;
                }
                else
                {
                    arr[i][j] = arr[i][j - 1];
                }
            }
            for (int j = 1; j <=n; j++)
            {
                if (i == (b[j-1] - 'a'))
                {
                    brr[i][j] = brr[i][j - 1] + 1;
                }
                else
                {
                    brr[i][j] = brr[i][j - 1];
                }
            }
        }

        // for(auto x:arr){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        //  for(auto x:brr){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;

while(q--){
    long long l,r;
    cin>>l>>r;
    long long maxi=0;
    for (int i = 0; i < 26; i++)
    {
        long long x=arr[i][r]-arr[i][l-1];
        long long y=brr[i][r]-brr[i][l-1];
        maxi=maxi+min(x,y);
    }

    cout<<(r-l+1-maxi)<<endl;
    
}






    }
    return 0;
}