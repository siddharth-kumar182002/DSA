#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long ans=n/4;
n=n%4;
 ans+=n/2;
cout<<ans<<endl;
}
return 0;
}