#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long x,k;
cin>>x>>k;
if((x%k)!=0){
    cout<<1<<endl;
    cout<<x<<endl;
}
else{

cout<<2<<endl;
if(x>0){
cout<<x-1<<" "<<1<<endl;
}
else{
    cout<<x+1<<-1<<endl;
}

}
}
return 0;
}