#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n0,n1,n2;
cin>>n0>>n1>>n2;
//n0----00
//---100-----001----000
//n1----01 or 10
//-----010---011======010-----110
//-----001----101------101----100
//n2------11
//----110----011----111
//100---001-----010------011------110---000---111
//n0----
//00000101010111111

string s="";
if(n2!=0){
    n2++;
}
for (int i = 0; i <n2; i++)
{
    s+='1';
}
if(n0!=0){
    n0++;
}
for (int i = 0; i <n0; i++)
{
    s+='0';
}
string t;
if(n2!=0 && n0!=0){
n1--;
t="1";
}
else if(n2!=0 && n0==0){
    t="0";
}
else if(n2==0 && n0!=0){
t="1";
}
else{
    s+="10";
    n1--;
    t="1";
}

for (int i = 0; i < n1; i++)
{
     s+=t;
     if(t=="0"){
        t="1";
     }
     else{
        t="0";
     }
}

cout<<s<<endl;

}
return 0;
}