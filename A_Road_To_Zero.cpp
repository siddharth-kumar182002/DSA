#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long x,y;
cin>>x>>y;

long long a,b;
cin>>a>>b;
int ans=0;
int c=min(x,y);
if(b<2*a){
    x=x-c;
    y=y-c;
ans=b*c;
}
ans=ans+(x+y)*a;
    cout<<ans<<endl;


}
return 0;
}