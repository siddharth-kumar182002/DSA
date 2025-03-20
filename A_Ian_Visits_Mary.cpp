#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
if(__gcd(a,b)==1){
    cout<<1<<endl;
    cout<<a<<" "<<b<<endl;
}
else{
    cout<<2<<endl;
    if(a<b){
        
        cout<<a-1<<" "<<a<<endl;
    }
    else{
        cout<<b<<" "<<b-1<<endl;
    }
}
}
return 0;
}