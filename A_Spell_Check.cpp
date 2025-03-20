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
string s;
cin>>s;
sort(s.begin(),s.end());

if( s.size()==5 && s[0]=='T' && s[1]=='i' && s[2]=='m' && s[3]=='r' && s[4]=='u'){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}