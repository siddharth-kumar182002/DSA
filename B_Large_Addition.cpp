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
long long n=s.size();
if(s[0]!='1' || s[n-1]=='9'){
      cout<<"NO"<<endl;
      continue;
}
long long f=0;
for (int i = 0; i < n-1; i++)
{
    if(s[i]=='0'){
        f=1;
        break;
    }
}
if(f==1){
    cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
}
}
return 0;
}