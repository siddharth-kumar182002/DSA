#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long f(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){
            ans=((ans%mod)*(a%mod))%mod;
        }
        a=((a%mod)*(a%mod))%mod;
        b=b>>1;
    }
   // ans=ans%mod;
    return (ans);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long k;
cin>>k;

long long ans=6;
ans=((ans%mod)*(f(4*1LL,((1LL<<k) - 2))%mod))%mod;
cout<<ans<<endl;

return 0;
}