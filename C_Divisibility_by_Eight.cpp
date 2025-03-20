#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s;
cin>>s;
long long n=s.size();
string ans="";
long long f=0;
for (int i = 0; i < n; i++)
{
   
    if(s[i]=='0' || s[i]=='8'){
        ans=ans+s[i];
        f=1;
        break;
    }
    for (int j = i+1; j < n; j++)
    {
        long long temp=(s[i]-'0')*10+(s[j]-'0');
        if(temp%8==0){
            ans=ans+s[i]+s[j];
            f=1;
            break;
        }
        for (int k = j+1; k < n;k++)
        {
            long long temp=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
        if(temp%8==0){
           // cout<<i<<" "<<j<<" "<<k<<endl;
            ans=ans+s[i]+s[j]+s[k];
            f=1;
            break;
        }
        }
         if(f==1){
        break;
    }
        
    }
     if(f==1){
        break;
    }
}

if(f==1){
    cout<<"YES"<<endl;
    cout<<ans<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}