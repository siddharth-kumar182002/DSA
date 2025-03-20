#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long f(long long n){
    if(n==1){
        return 1;
    }

    return ((n%mod)*(f(n-1)%mod))%mod;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
cin>>arr[0];
long long x=arr[0];

for (int i = 1; i < n; i++)
{
    cin>>arr[i];
    x=x&arr[i];
}

long long zero=0;
long long one=0;
for (int i = 0; i <n; i++)
{
    if(arr[i]==0){
        zero++;
    }
    if(arr[i]==x && x!=0){
        one++;
    }
}

// cout<<zero<<endl;
// cout<<one<<endl;
// cout<<f(3)<<endl;
long long ans=0;
if(n==2){
    if(zero==2 || one==2){
        cout<<2<<endl;
    }
    else{
        cout<<0<<endl;
    }
    continue;
}
ans=ans+((((zero%mod)*(zero-1)%mod)%mod)*f(n-2))%mod+((((one%mod)*(one-1)%mod)%mod)*f(n-2))%mod;
cout<<ans<<endl;
}
return 0;
}