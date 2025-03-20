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
long long ans=1;
while(n>3){
    ans=ans*2;
    n=n/4;
}
cout<<ans<<endl;
}
return 0;
}