#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long x,y,z;
cin>>x>>y>>z;

long long sum=x+y+z;

long long k=sum/9;
if(sum%9==0 && x>=k and y>=k and z>=k){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}