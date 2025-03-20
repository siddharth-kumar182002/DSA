#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m,q;
cin>>n>>m>>q;
long long a,b;
cin>>a>>b;

long long c;
cin>>c;
//cout<<a<<" "<<b<<" "<<c<<endl;
if(c<a && a<b){
    //cout<<"hihi11"<<endl;
    cout<<(a-1)<<endl;
    
}
else if(c>b && b>a){
//cout<<"hihi2"<<endl;
cout<<(n-b)<<endl;
}
else{
    //cout<<"hihi"<<endl;
long long d=max(abs(a-c),abs(b-c));
long long d1=min(abs(a-c),abs(b-c));
long long ans=(d/2+(d%2));
if(d1%2==0){
    ans=ans+(d1/2)-1;
}
else{
    ans=ans+d1/2;
}
cout<<ans<<endl;
}

}
return 0;
}