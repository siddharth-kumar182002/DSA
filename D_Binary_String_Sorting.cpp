#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.size();
long long x=1e12;
long long d=1e12+1;
if(n==1 || n==0){
    cout<<0<<endl;
}
else if(n==2){
    if(s[0]=='1' && s[1]=='0'){
        cout<<x<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
else{
char pr1=s[0];
char pr=s[1];
long long ans=0;
for (int i = 2; i < n; i++)
{
char curr=s[i];


if(pr1=='1' && pr=='0' && curr=='0'){
ans=ans+d;
pr1=pr;
pr=curr;
continue;

}
if(pr1=='1' && pr=='1' && curr=='0'){
ans=ans+d;
continue;

}if(pr1=='1' && pr=='0' && curr=='1'){
ans=ans+x;
pr1=pr;
pr=curr;
continue;
}if(pr1=='0' && pr=='1' && curr=='0'){
ans=ans+x;
pr1=pr;
pr=curr;
swap(pr1,pr);
continue;
}
pr1=pr;
pr=curr;
}

cout<<ans<<endl;
}
}
return 0;
}