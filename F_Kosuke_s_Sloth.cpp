#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
long long a=1%k;
long long b=1%k;
long long i=1;
while(a){
    i++;
    long long x=a;
     a=b;
     b=(x+b)%k;
}
cout<<((n%mod)*(i%mod))%mod<<endl;
}
return 0;
}