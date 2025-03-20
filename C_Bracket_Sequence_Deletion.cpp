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
long long l=0;
long long r=1;
long long ans=0; 
while(l<n && r<n) 
{
    if(s[l]=='(' && s[r]==')'){
           ans++;
           l=l+2;
           r=r+2;
           continue;
    }
    while(r<n && s[l]!=s[r]){
        r++;
    }
    if(s[l]==s[r]){
        ans++;
        l=r+1;
        r=r+2;
    }

}

cout<<ans<<" "<<n-l<<endl;

}
return 0;
}