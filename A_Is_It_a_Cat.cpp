#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
transform(s.begin(), s.end(), s.begin(), ::toupper);
  s.erase(unique(s.begin(), s.end()), s.end());


if(s=="MEOW"){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}