#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;

if(a==b && b==c && c==a){
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
}

else if(a==c && a>b){
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<1<<endl;
}

else if(a>=b && b>=c && c>=a){
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
else{
    cout<<"NO"<<endl;
}












}
return 0;
}