#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
//long long l=0;
//long long r=n-1;
int flag=0;
for (long long i = 0; i < n/2; i++)
{
    if(s[i]==s[n-i-1]){
        if(flag==1){
            break;
        }
        continue;

}
if(s[i]!=s[n-i-1]){
    if(s[i]=='0'){
        s[i]='1';
    }
    else{
        s[i]='0';
    }
    flag=1;
    continue;
}
}
string v=s;
reverse(v.begin(),v.end());
if(s==v){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}