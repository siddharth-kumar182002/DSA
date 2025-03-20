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
for (int i = 0; i < n; i++)
{
    if(s[i]=='0' && s[n-1-i]=='1'){
        s[i]='X';
        s[n-1-i]='X';
    }
    else if(s[i]=='1' && s[n-1-i]=='0'){
     s[i]='X';
     s[n-1-i]='X';
 }
 else{
    break;
 }

}
int count=0;
for (int i = 0; i < n; i++)
{
    if(s[i]!='X'){
        count++;
    }
}
cout<<count<<endl;




}
return 0;
}