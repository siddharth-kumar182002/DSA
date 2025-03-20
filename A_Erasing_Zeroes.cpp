#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int a=10000;
int b=-1;
int count=0;
for (int  i = 0; i < s.size(); i++)
{
    if(s[i]=='1'){
        a=min(a,i);
        b=max(b,i);
    }
    
}

for (int i = a; i < b; i++)
{
    if(s[i]=='0'){
        count++;
    }
}
cout<<count++<<endl;

}
return 0;
}