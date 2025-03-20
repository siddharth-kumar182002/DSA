#include <bits/stdc++.h>
using namespace std;
int main() {
long long x,y,z;
cin>>x>>y>>z;

long long r1=x%z;
long long r2=y%z;
if((r1+r2)<z){
    cout<<(x/z)+(y/z)<<" "<<0<<endl;
}
else{
    cout<<(x/z)+(y/z)+((r1+r2)/z)<<" "<<min((z-r1),(z-r2))<<endl;
    
}


return 0;
}