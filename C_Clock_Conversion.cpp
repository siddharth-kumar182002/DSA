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
string h="";
h=h+s[0]+s[1];
int hour=stoi(h);
int temp=hour-12;

if(temp>0){
    string x=to_string(temp);
    if(x.size()==1){
        x="0"+x;
    }
cout<<x<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
}
else if(temp==0){
cout<<"12"<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
}
else{
    if(temp==(-12)){
        s[0]='1';
        s[1]='2';
    }
    cout<<s<<" "<<"AM"<<endl;
}
}
return 0;
}