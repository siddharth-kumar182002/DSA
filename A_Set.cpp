#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long l,r,k;
cin>>l>>r>>k;
long long y=r/k;
long long ans=y-l+1;
if(ans<0){
    cout<<0<<endl;
}
else{
    cout<<ans<<endl;
}
//cout<<(y-l+1)<<endl;
}
return 0;
}