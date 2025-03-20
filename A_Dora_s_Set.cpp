#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long l,r;
cin>>l>>r;

long long ans=0;
long long x,y,z;
if(l%2==0){
    z=l;
    x=l+1;
    y=l+3;
}
else{
x=l;
y=l+2;
z=l+1;
}
while(z<=r && y<=r){
    if(__gcd(x,y)==1 && __gcd(y,z)==1 && __gcd(z,x)==1){
        x=y+2;
        y=y+4;
        z=z+2;
        ans++;
    }
    else{
        z=z+2;
    }
}

cout<<ans<<endl;
}
return 0;
}