#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s,t;
cin>>s>>t;
long long ans=0;
long long ind=-1;
long long f=0;
for (int i = 0; i < s.size(); i++)
{
     ind=i;
    if(s[i]==t[i]){
        ans++;
    }
    else{
       f=1;
        break;
    }
}
if(ans>0){
    ans++;
}
if(f==0){
    ind++;
}
//cout<<ind<<endl;

    if(ind<s.size()){
ans=ans+(s.size()-ind);
    }
    if(ind<t.size()){
        ans=ans+t.size()-ind;
    }



cout<<ans<<endl;

}
return 0;
}