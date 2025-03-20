#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n=s.size();
string ans="0"+s;
//cout<<ans<<endl;
long long j=-1;
for (int i = n-1; i >=0 ; i--)
{
    if((ans[i+1]-'0')>=5 ){
           ans[i]=ans[i]+1;
           j=i+1;
    }

    if(ans[i]=='9'){
        while(s[i]=='9'){
            i--;
        }
       // cout<<"in="<<i<<endl;
        ans[i]=ans[i]+1;

        j=i+1;
    }
}


if(j!=-1){
for (int i = j; i <=n; i++)
{
    ans[i]='0';
}
if(ans[0]=='0'){
    ans=ans.substr(1,n);
}
cout<<ans<<endl;
}
else{
    if(ans[0]=='0'){
    ans=ans.substr(1,n);
}
    cout<<ans<<endl;
}



}
return 0;
}