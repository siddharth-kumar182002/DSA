#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n==1){
    cout<<3<<endl;
}
else{
int set;
for (int i = 0; i < 32; i++)
{
    if((n&(1<<i))!=0){
        set=i;
        break;
    }
}
//cout<<"check"<<(1<<1)<<endl;
int ans=(1<<set);
if(ans!=n){
cout<<ans<<endl;
}
else{
    cout<<ans+1<<endl;
}
}

}
return 0;
}