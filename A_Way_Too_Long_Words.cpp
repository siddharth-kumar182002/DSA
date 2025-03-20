#include<iostream>
using namespace std;
int main() {

int n;
cin>>n;

while(n--){

int l;
string s;
cin>>s;
l=s.length();

if(s.length()>10){

    cout<<s.at(0)<<(l-2)<<s.at(l-1)<<endl;




}
else{

    cout<<s<<endl;
}
}


return 0;
}