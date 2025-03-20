#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;

if(t%4==0){
    cout<<t/4-1<<endl;
}
else if(t%4==1){
    cout<<0<<endl;
}
else if(t%4==2){
    cout<<t/4<<endl;
}
else if(t%4==3){
    cout<<0<<endl;
}
return 0;
}