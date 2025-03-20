#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
string ans="";
ans=ans+s[0];
for (int i = 1; i < n; i++)
{
    ans+=s[i];
    if(s[i]=='a' || s[i]=='e'){

       if(i+2<n && (s[i+2]=='a' || s[i+2]=='e')){
             ans+='.';
       }

    }
    else{
       if(i+1<n && (s[i+1]!='a' && s[i+1]!='e')){
              ans+='.';
       }
    }
}
cout<<ans<<endl;
}
return 0;
}