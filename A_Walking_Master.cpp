#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int a,b,a1,b1;
cin>>a>>b>>a1>>b1;
if(b>b1){
    cout<<-1<<endl;
    continue;
}
if(a<a1-(abs(b-b1))){
    cout<<-1<<endl;
    continue;
}

if(a>=a1){
    cout<<2*abs(b-b1)+abs(a-a1)<<endl;
}
else{
    cout<<2*abs(b-b1)-abs(a-a1)<<endl;
}
}
return 0;
}