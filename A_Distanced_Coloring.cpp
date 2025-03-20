#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;

//cout<<ans<<endl;
long long x=min(k,n);
long long y=min(k,m);
long long ans=y*x;

cout<<ans<<endl;
}
return 0;
}