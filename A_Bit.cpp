#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
int ans=0;
while(t--){
string s;
cin>> s;

if(s.at(1)=='+'){
    ans=ans+1;
}
if(s.at(1)=='-'){

    ans=ans-1;
}
}
cout<<ans<<endl;
return 0;
}