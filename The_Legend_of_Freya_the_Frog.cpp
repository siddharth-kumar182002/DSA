#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y,k;
cin>>x>>y>>k;
long long a=0;
long long b=0;
if(x%k==0){
    a+=x/k;
}
else{
    a+=(x/k)+1;
}
if(y%k==0){
    b+=y/k;
}
else{
    b+=(y/k)+1;
}
long long ans=(2*min(a,b)+2*(abs(a-b)));
if(b>=a){
cout<<ans<<endl;
}
else{
ans--;
cout<<ans<<endl;
}


}
return 0;
}