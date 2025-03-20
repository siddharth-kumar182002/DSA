#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s,t;
cin>>s>>t;
//bxyzqaccba
//ababaa
long long l=s.size();
long long r=t.size();
while(l>=0 && r>=0){
if(s[l]==t[r]){
    l--;
    r--;
}
else{
    l=l-2;
}
}

if(r<0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}