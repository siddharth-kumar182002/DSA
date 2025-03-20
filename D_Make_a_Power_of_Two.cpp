#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long x=1;
long long ans=INTMAX_MAX;
//s->num
for (int i = 0; i <=60; i++)
{
    if(i!=0){
    x=x*2;
    }
    string num=to_string(x);
long long k=0;
long long moves=0;
long long pv=0;
for (int j = 0; j < s.size(); j++)
{
      if(s[j]!=num[k]){
            moves=moves+1;
      }
      else{
        k++;
      }
}

if(k<=num.size()-1){
    moves=moves+(num.size()-k);
}
//cout<<"i="<<i<<endl;
//cout<<"num="<<num<<endl;
//cout<<moves<<endl;
ans=min(ans,moves);
    
}
cout<<ans<<endl;
}
return 0;
}