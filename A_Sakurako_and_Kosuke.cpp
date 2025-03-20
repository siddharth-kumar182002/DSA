#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long turn=0;
long long x=0;
long long i=1;
while(x<=n && x>=(-n)){
    long long d=(2*i)-1;
    
if(turn==0){
x=x-(d);
turn=1;
}
else{
x=x+d;
turn=0;
}
// cout<<"x="<<x<<endl;
// cout<<"turn="<<turn<<endl;
i++;
}

if(turn==1){
cout<<"Sakurako"<<endl;
}
else{
cout<<"Kosuke"<<endl;
}
}
return 0;
}