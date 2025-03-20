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
long long x=sqrt(n);
if(x*x==n){



long long f=0;
for (int i = 0; i < x; i++)
{
    if(s[i]=='0'){
        f=1;
    }
}

for (int i = x*(x-1); i <((x*(x-1))+x); i++)
{
   if(s[i]=='0'){
        f=1;
    }
}
// cout<<f<<endl;
long long l=x;
long long r=2*x-1;
// cout<<l<<" "<<r<<endl;
while(l<=(x*(x-2))){


for (int i = l; i <=(r) ; i++)
{
    if((i==l || i==r) ){
        if(s[i]=='0'){
             f=1;
        }
    }
    else{
        if(s[i]=='1'){
            f=1;
        }
    }
    if(f==1){
        break;
    }
}
// cout<<"l"<<" "<<"R"<<l<<" "<<r<<endl;
// cout<<f<<endl;
l=l+x;
r=r+x;
if(f==1){
    break;
}
}

if(f==1){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}





}
else{
    cout<<"No"<<endl;
}
}
return 0;
}