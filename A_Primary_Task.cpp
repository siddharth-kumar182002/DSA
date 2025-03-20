#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;


if(s[0]=='1' && s[1]=='0'){
if(s.size()==2){
    cout<<"NO"<<endl;
}
else if(s.size()==3){
    if((s[2]-'0')>=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else{
    if((s[2]-'0')>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}