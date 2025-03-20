#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long x=a+2*b;
if(x%2==0){
long long n=(a/2);
if(b%2==0){
    cout<<"YES"<<endl;
}
else{
    if(a>0){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }
}
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}