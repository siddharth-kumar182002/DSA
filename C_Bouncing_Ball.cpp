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
        long long n, p, k;
        cin >> n >> p >> k;
        string s;
        cin >> s;
        long long x, y;
        cin >> x >> y;
        
        vector<long long> dp(n, 1e16);

        for (int i = n - 1; i >=p-1; i--)
        {
            if (i + k <= n - 1)
            {
              
                dp[i]=dp[i+k]-k*y;
                if(s[i]=='0'){
                    dp[i]+=x;
                }
                
            }
            else
            {
                dp[i] = (i - p+1) * y;
                if (s[i] == '0')
                {
                    dp[i] += x;
                }
            }
        }

        long long ans=1e16;
    for(auto x:dp){
        // cout<<x<<" ";
        ans=min(ans,x);
    }
   
    cout<<ans<<endl;




    }

    return 0;
}