#include<iostream>
using namespace std;
int main() {
long long t;
cin>>t;

while(t--){

    long long p,a,b,c;
    cin>>p>>a>>b>>c;

    long long x,y,z;
    x=a*((p+a-1)/a);
    y=b*((p+b-1)/b);
    z=c*((p+c-1)/c);
    cout<<min(x,min(y,z))-p<<endl;
    
}
return 0;
}
    














    
