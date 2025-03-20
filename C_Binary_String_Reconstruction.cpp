#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;

long long x;
cin>>x;

long long n=s.size();
string ans="";
for (int i = 0; i <n; i++)
{
    ans+='1';

}

string ch="";
for (int i = 0; i <n; i++)
{
    ch+='0';
    if(s[i]=='0'){
        if(i-x>=0){
  
            ans[i-x]='0';
        }
        if(i+x<n){

            ans[i+x]='0';
        }
    }

}

for (int i = 0; i < n; i++)
{
    if(i-x>=0 && ans[i-x]=='1'){
            ch[i]='1';
    }
    if(i+x<n && ans[i+x]=='1'){
              ch[i]='1';
    }
}
// cout<<"s="<<s<<endl;
// cout<<"ans="<<ans<<endl;
// cout<<"ch="<<ch<<endl;

if(ch==s){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}


}
return 0;
}