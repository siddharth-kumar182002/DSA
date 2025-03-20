#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long n,m;
cin>>n>>m;
//cout<<a*m*(n/(m+1))<<endl;
//cout<<b*(n-(m+1)*(n/(m+1)))<<endl;

long long x=a*m*(n/(m+1))+a*(n%(m+1));
long long y=a*m*(n/(m+1))+b*(n%(m+1));
long long z=b*n;

long long ans=min(min(x,y),z);
cout<<ans<<endl;
}
return 0;
}