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
char x='z';
for (int i = 0; i <n; i++)
{
    x=min(x,s[i]);
}

long long k=1e9;
string ans="";
for (int i = 0; i < n; i++)
{
         if(s[i]==x){
           string y=s.substr(i,(n-i));
           string z=s.substr(0,i);
          // cout<<"sz="<<(n-i)<<endl;
           if((n-i)%2!=0){
            reverse(z.begin(),z.end());
           }
           y+=z;
             if(k==1e9){
                ans=y;
                k=i+1;
                continue;
             }
             if(y<ans){
                ans=y;
                k=i+1;
             }
         }
}

cout<<ans<<endl;
cout<<k<<endl;

}
return 0;
}