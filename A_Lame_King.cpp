#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int x=abs(a);
int y=abs(b);

if(x==y){
    cout<<x+y<<endl;
}
else if(x>y){
    cout<<2*y+((x-y-1))+(x-y)<<endl;
}
else{
    cout<<2*x+((y-x-1))+(y-x)<<endl;
}
}
return 0;
}