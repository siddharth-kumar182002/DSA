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
string ans="";
long long i=0;
long long j;
while(i<n){
    j=i+1;
    while (s[i] !=s[j]){
          j=j+1;
    }
    ans.push_back(s[i]);
    i=j+1;
}
cout<<ans<<endl;
}
return 0;
}