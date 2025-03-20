#include <bits/stdc++.h>
using namespace std;

int main() {
long long t;
cin>>t;
while(t--){
string s;
cin>>s;
long long sum=0;
long long x;
long long c1=0;
long long c2=0;
for (long long i = 0; i < s.length(); i++)
{
    x=s[i]-'0';
    if(s[i]=='0'){
         c1++;
    }
    if(x%2==0  ){
    c2++;
    }
    sum=sum+x;
}

//cout<<"c1="<<c1<<endl;
//cout<<"c2="<<c2<<endl;
//cout<<"sum="<<sum<<endl;
if(sum%3==0 && c1>0 && c2>1 ){
      cout<<"red"<<endl;
}
else{
    cout<<"cyan"<<endl;
}
}
return 0;
}