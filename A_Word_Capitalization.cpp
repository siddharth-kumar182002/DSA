#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;

if(int(s[0])>=97 && int(s[0])<=122){
    s[0]=int(s[0])-32;
}

cout<<s<<endl;
return 0;
}