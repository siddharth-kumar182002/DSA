#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
long long tpow(long long x, long long y)
{
    long long res = 1;
    if (x == 0)
        return 0;
    while (y)
    {
        if (y & 1)
            (res *= x) %= mod;
        y >>= 1;
        (x *= x) %= mod;
    }
    return res;
}
long long func(long long x,long long y){
long long p=tpow(2,y);
long long ans=(x*p)%mod;
return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> maxi(n,0);

for (int i = 1; i <=n; i++)
{
    for (int k = i; k<=n ; k=k+i)
    {
            maxi[i-1]=max(maxi[i-1],arr[k-1]);
    }
    
}

sort(maxi.begin(),maxi.end());
reverse(maxi.begin(),maxi.end());
long long ans=0;
for (int i = 0; i < n; i++)
{
    ans=(ans+func(maxi[i],n-i-1))%mod;
}
cout<<ans<<endl;

return 0;
}