#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s1;
cin>>s1;
string s2;
cin>>s2;
string a="";
string b="";
long long l1=s1.size();
long long l2=s2.size();

long long lc=(l1*l2)/__gcd(l1,l2);
long long x=lc/l1;
//cout<<"x="<<x<<endl;
while(x--){
    a=a+s1;
}
long long y=lc/l2;
while(y--){
   b=b+s2;
}
//cout<<"a="<<a<<endl;
if(a==b){
    cout<<a<<endl;
}
else{
    cout<<-1<<endl;
}


}
return 0;
}