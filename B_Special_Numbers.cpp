#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long ans=0;
long long p=1;
for (int i = 0; i <=31; i++)
{
    if(k & (1<<i)){
        ans=(ans+p)%mod;
    }
    p=(p*n)%mod;

}
cout<<ans<<endl;

}
return 0;
}