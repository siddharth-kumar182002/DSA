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
int r=0;
int l=0;
int d=0;
int u=0;
int flag=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='R'){
        r++;
    }
     if(s[i]=='U'){
     u++;
 }
  if(s[i]=='L'){
     l--;
 }
  if(s[i]=='D'){
     d--;
 }
 if((r+l==1)&&(u+d)==1){
    cout<<"YES"<<endl;
    flag=1;
    break;
 }
}
if(flag!=1){
    cout<<"NO"<<endl;
}


}
return 0;
}