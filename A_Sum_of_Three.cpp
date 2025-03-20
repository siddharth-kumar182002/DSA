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
if((n-3)%3!=0){
    if(n-3<=2){
        cout<<"NO"<<endl;
    }
    else{
    cout<<"YES"<<endl;
    cout<<1<<" "<<2<<" "<<n-3<<endl;
    }
}
else{
    if(n-5<=4){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<1<<" "<<4<<" "<<n-5<<endl;
    }
}
}
return 0;
}