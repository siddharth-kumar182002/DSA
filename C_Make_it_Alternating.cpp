#include <bits/stdc++.h>
using namespace std;
long long MOD=998244353;

#define MAX 2*100000+1
//long long  result[MAX + 1];
long long fact[MAX + 1];
void preCompute()
{
    fact[0] = 1;
 
    for (int i = 1; i <= MAX; i++) {
 

        fact[i] = ((fact[i - 1] % MOD) * i) % MOD;
 
        //result[i] = ((result[i - 1] % MOD) * (fact[i] % MOD)) % MOD;
    }
}
long long f(long long n, long long r)
{
    return fact[n] / (fact[r] * fact[n - r]);
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
preCompute();
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n=s.size();
long long l=0;
long long r=0;
long long ans=0;
long long ans2=1;
 
while(l<n && r<n){
    while(r<n-1 && s[r]==s[r+1]){
           r++;
    }
    //l......r
    //long long clen=l-r+1;
    ans=(ans+(r-l));
    if(r!=l){
        ans2=((ans2%MOD))*((r-l+1)%MOD)%MOD;
    }

r++;
l=r;
}
cout<<ans<<" "<<(fact[ans]*ans2)%MOD<<endl;

}
return 0;
}