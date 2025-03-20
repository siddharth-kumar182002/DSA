#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
map<long long ,long long > m;
long long maxi=-1;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    m[temp]++; 
    maxi=max(maxi,temp);
}
/*
for(auto y:m){
    cout<<y.first<<" "<<y.second<<endl;
}*/
long long ans=0;

for(auto y: m){
long long a=y.first;
if(a>maxi){
    break;
}
//cout<<"a="<<a<<endl;
long long ac=y.second;
long long b=x*a;
//cout<<"ac="<<ac<<endl;
if(m[b]>0){
 //cout<<"minin="<<min(m[b],ac)<<endl;
 long long mini=min(m[b],ac);
m[b]=m[b]-mini;
ac=ac-mini;
//cout<<"acin="<<ac<<endl;
if(ac>0){
    ans=ans+ac;
    m[a]=0;
}
//m[y.first]=0;
}
else{
    if(ac>0){
    ans=ans+ac;
    }
}
//cout<<"ans="<<ans<<endl;
}
cout<<ans<<endl;
 

}
return 0;
}