#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
n=n%m;
long long a=n/(__gcd(n,m));
long long b=m/(__gcd(n,m));

if(__builtin_popcount(b)>1){
    cout<<-1<<endl;
    continue;
}

cout<<(1LL*__builtin_popcount(a)*m-n)<<endl;
}
return 0;
}