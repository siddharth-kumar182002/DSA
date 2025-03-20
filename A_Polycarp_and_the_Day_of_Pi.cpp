#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;

string pie="31415926535897932384626433832795028841971";
//cout<<s.size()<<endl;
long long ans=0;
for (long long i = 0; i <s.size(); i++)
{
    //cout<<"s[i]="<<s[i]<<endl;
    // cout<<"p[i]="<<pie[i]<<endl;
    if(s[i]!=pie[i]){
        ans=i;
break;
    }
    // else{
        // continue;
    // }
}

cout<<ans<<endl;

}
return 0;
}