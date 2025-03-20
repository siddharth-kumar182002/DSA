#include<bits/stdc++.h>
using namespace std;
#include<cstdint>
 
#define ll long long
#define ld  double  
// #define MOD 998244353
#define vl vector<ll> 
string s;
int PERM[1000];
long long MOD=998244353;

 ll Pow(ll x,ll y){
        long long int ans=1, z=x,iteration=1;
        while(y!=0){
            if(y&1){
                ans=(ans*x)%MOD;
            }
            x=(x*x)%MOD;
            y=y>>1;
        }
        return ans;
    }
ll multi_inverse(ll x){
    ll ans=Pow(x,(MOD-2));
    // cout<<ans<<endl;
        return ans;
}
 ll NCR(ll n,ll r){
    ll denom=(PERM[r]%MOD * PERM[n-r]%MOD)%MOD;
    // cout<<denom<<endl;
    ll inverse= multi_inverse(denom);
    // cout<<inverse<<endl;

    ll ans=(PERM[n]*inverse)%MOD;
    return ans;

 }
int main ()
{   
    ll t=1;
    cin>>t;
    PERM[0]=1;
    for(ll i=1;i<=105;i++){
        PERM[i]=(PERM[i-1]*i)%MOD;
    }
    while(t--){
     ll n;
    cin>>n;
    vector<vector<ll>> dp(n+1,vector<ll> (3,-1));

    dp[2][0]=1;
    dp[2][1]=0;
    dp[2][2]=1;

    for (int i = 4; i<=n; i=i+2)
    {
         dp[i][0]= (NCR(i-1,i/2)+dp[i-2][1])%MOD;
          dp[i][1]=(NCR(i-2,i/2)+dp[i-2][0])%MOD;
           dp[i][2]=1;
    }
    
    cout<<dp[n][0]<<" "<<dp[n][1]<<" "<<dp[n][2];

        cout<<endl;
    }
    return 0;
    
}

// 7
// 0 0 1 -1 -1 -1 0
// 7
// 0 0 -1 0 0 1 0
// 8
// -1 1 1 1 1 0 0 0
