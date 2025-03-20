#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
if(s.at(0)+s.at(1)+s.at(2)==s.at(3)+s.at(4)+s.at(5)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}